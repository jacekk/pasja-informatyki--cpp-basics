#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "You are not an adult and you cannot be a president." ;
    } else if (age < 35) {
        cout << "You are an adult but you cannot be a president.";
    } else {
        cout << "You are an adult and you can be a president.";
    }

    cout << endl;

    return 0;
}
