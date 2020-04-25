#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

void printMenu()
{

    cout << endl;
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

    while (true)
    {
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;

        printMenu();

        cout << "Pick an action: ";
        cin >> action; // getch() from video does not work properly on linux

        switch (action)
        {
        case '1':
            cout << "x + y = " << x + y;
            break;
        case '2':
            cout << "x - y = " << x - y;
            break;
        case '3':
            cout << "x * y = " << x * y;
            break;
        case '4':
            if (y == 0)
                cout << "Cannot divide by zero :(";
            else
                cout << "x / y = " << x / y;
            break;
        case '5':
            cout << "Bye :)" << endl << endl;
            exit(0);
        default:
            cout << "Oops!!! Operation NOT in the MENU :(";
        }

        cin.get();
        cout << endl;
        cin.get();

        system("clear");
    }

    return 0;
}
