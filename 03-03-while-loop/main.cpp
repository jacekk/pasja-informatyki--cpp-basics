#include <iostream>

using namespace std;

int main()
{
    int population = 1;
    int hours = 0;

    while (population <= 1e9) {
        hours++;
        population *= 2;

        cout << "hours passed: " <<  hours;
        cout << " | ";
        cout << "number of bacteria: " <<  population;
        cout << endl;
    }

    return 0;
}
