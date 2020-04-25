#include <iostream>

using namespace std;

int main()
{
    int numOfGraged = 5;
    float grades[numOfGraged];
    float sum = 0;

    for (int i = 0; i < numOfGraged; i++)
    {
        cout << "Pass your greade #" << i + 1 << ": ";
        cin >> grades[numOfGraged];
        sum += grades[numOfGraged];
        cout << endl;
    }

    float average = sum / numOfGraged;

    cout << "Your grades average is: " << average << endl;
    cin.get();

    return 0;
}
