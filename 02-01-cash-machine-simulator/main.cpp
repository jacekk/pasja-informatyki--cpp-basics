#include <iostream>

using namespace std;

int main()
{
    string pin;

    cout << "Hello in our bank!" << endl;
    cout << "Enter PIN: ";
    cin >> pin;

    if (pin == "3210") {
        cout << "PIN jest poprawny :)";
    } else {
        cout << "PIN nie jest poprawny :(";
    }

    cout << endl;

    return 0;
}
