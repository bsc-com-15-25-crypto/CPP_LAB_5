#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    bool accepted = false;

    cout << "Enter an integer value between 5 and 10"
         << endl;

    while (!accepted)
    {
        cin >> number;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Sorry, you entered an invalid number, "
                 << "please try again" << endl;
        }
        else if (number < 5 || number > 10)
        {
            cout << "You entered " << number
                 << ". Please enter a number "
                 << "between 5 and 10." << endl;
        }
        else
        {
            accepted = true;
        }
    }

    cout << "Your input value(" << number
         << ") has been accepted." << endl;
    return 0;
}
