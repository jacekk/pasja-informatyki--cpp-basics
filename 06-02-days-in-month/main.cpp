#include <iostream>

using namespace std;

bool isLeapYear(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }

    return year % 4 == 0 && year % 100 != 0;
}

int main()
{
    int monthNumber;

    cout << "Pass month number (1-12): ";
    cin >> monthNumber;

    switch (monthNumber)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "This month lasts for 31 days.";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "This month has 30 days.";
        break;
    case 2:
        int year;
        cout << "In which year? ";
        cin >> year;
        if (isLeapYear(year))
            cout << "This month has 29 days.";
        else
            cout << "This month has 28 days.";
        break;
    default:
        cout << "!! Not a valid month number !!";
    }

    cout << endl;
    cin.get();

    return 0;
}
