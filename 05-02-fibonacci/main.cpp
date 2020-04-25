#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int space = 1e5;
    long double numbers[space];
    int amount;

    cout << "How many Fibonacci number should I calculate? ";
    cin >> amount;
    cout << endl;

    numbers[0] = 1;
    numbers[1] = 1;

    for (int i = 2; i < amount; i++)
    {
        numbers[i] = numbers[i - 1] + numbers[i - 2];
    }

    cout << setprecision(1000);
    cout << "number #" << amount << ": " << numbers[amount - 1] << endl;
    cout << "golden ratio: " << numbers[amount - 1] / numbers[amount - 2] << endl;

    cout << endl;
    cin.get();

    return 0;
}
