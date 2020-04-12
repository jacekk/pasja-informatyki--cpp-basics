#include <iostream>

using namespace std;

int main()
{
    string name;
    int times;

    cout << "Enter name: ";
    cin >> name;
    cout << "Enter positive integer number: ";
    cin >> times;


    for (int i = 1; i <= times; i++)
    {
        if (i < 10) {
            cout << " ";
        }
        cout << i << ". " << name << endl;
    }

    return 0;
}
