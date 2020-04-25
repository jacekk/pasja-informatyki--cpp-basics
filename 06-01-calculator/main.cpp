// #include <conio.h> // @todo find linux equivalent
#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

void printMenu()
{

    cout << "MENU" << endl;
    cout << " 1. Add" << endl;
    cout << " 2. Subtract" << endl;
    cout << " 3. Multiply" << endl;
    cout << " 4. Divide" << endl;
    cout << " 5. Exit" << endl;
    cout << endl;
}

int main()
{
    float x, y;
    char action;

    while (action != '5')
    {

        cout << "First number: ";
        cin >> x;
        cout << "Second number: ";
        cin >> y;
        cout << endl;
        printMenu();
        cout << "Pick an action: ";
        action = getch();

        cout << "==" << action << "==" << endl;

        switch (action)
        {
        case '1':
            cout << "Sum: " << x + y;
            break;
        case '2':
            cout << "Subtraction: " << x - y;
            break;
        case '3':
            cout << "Multiplication: " << x * y;
            break;
        case '4':
            if (y == 0)
                cout << "Cannot divide by zero!!";
            else
                cout << "Division: " << x / y;
            break;
        default:
            cout << "Oops!!! Operation NOT in the MENU :(";
        }

        cin.get();
        system("clear");
    }

    return 0;
}
