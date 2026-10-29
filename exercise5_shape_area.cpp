#include <iostream>
using namespace std;

double squareArea(double side)
{
    return side * side;
}

double rectangleArea(double length, double width)
{
    return length * width;
}

double triangleArea(double base, double height)
{
    return 0.5 * base * height;
}

void showMenu()
{
    cout << endl;
    cout << "Please select the area of the shape "
         << "to calculate" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit Program" << endl;
    cout << endl;
    cout << "Enter selection: ";
}

int main()
{
    int choice = 0;

    while (choice != 4)
    {
        showMenu();
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Your input was not a number which is "
                 << "an invalid input" << endl;
            cout << "Please enter a valid input!!!" << endl;
            choice = 0;
        }
        else if (choice == 1)
        {
            double side;
            cout << "Enter the side length: ";
            cin >> side;
            cout << "Area of the square: "
                 << squareArea(side) << endl;
        }
        else if (choice == 2)
        {
            double length, width;
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the width: ";
            cin >> width;
            cout << "Area of the rectangle: "
                 << rectangleArea(length, width) << endl;
        }
        else if (choice == 3)
        {
            double base, height;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            cout << "Area of the triangle: "
                 << triangleArea(base, height) << endl;
        }
        else if (choice == 4)
        {
            cout << "Goodbye!" << endl;
        }
        else
        {
            cout << "Your input was: " << choice
                 << " which is an invalid input" << endl;
            cout << "Please enter a valid input!!!" << endl;
        }
    }

    return 0;
}
