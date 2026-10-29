#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

int countVowels(const string& text)
{
    int count = 0;
    for (char ch : text)
    {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u')
        {
            count++;
        }
    }
    return count;
}

int countWords(const string& text)
{
    istringstream stream(text);
    string word;
    int count = 0;
    while (stream >> word)
    {
        count++;
    }
    return count;
}

string Reverse(const string& text)
{
    string reversed = "";
    for (int i = (int)text.size() - 1; i >= 0; i--)
    {
        reversed += text[i];
    }
    return reversed;
}

string capitalizeSecondLetters(const string& text)
{
    string result = text;
    int positionInWord = 0;
    for (size_t i = 0; i < result.size(); i++)
    {
        if (result[i] == ' ')
        {
            positionInWord = 0;
        }
        else
        {
            positionInWord++;
            if (positionInWord == 2)
            {
                result[i] = toupper(result[i]);
            }
        }
    }
    return result;
}

int main()
{
    ifstream file("statement.txt");

    if (!file.is_open())
    {
        cout << "Error: could not open statement.txt"
             << endl;
        return 1;
    }

    string fileData;
    getline(file, fileData);
    file.close();

    cout << "Text from file: " << fileData << endl;
    cout << "Number of vowels: "
         << countVowels(fileData) << endl;
    cout << "Number of words: "
         << countWords(fileData) << endl;
    cout << "Reversed: " << Reverse(fileData) << endl;
    cout << "Second letters capitalized: "
         << capitalizeSecondLetters(fileData) << endl;

    return 0;
}
