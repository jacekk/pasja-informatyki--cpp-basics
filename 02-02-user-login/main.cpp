#include <iostream>

using namespace std;

int main()
{
    string login, password;

    cout << "Enter login: ";
    cin >> login;
    cout << "Enter password: ";
    cin >> password;


    if (login == "admin" && password == "secret") {
        cout << "Hooray! :)";
    } else {
        cout << "Login failed :(";
    }

    cout << endl;

    return 0;
}
