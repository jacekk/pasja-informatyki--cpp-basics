#include <iostream>

using namespace std;

int main()
{
    int numOfStudents, numOfSweets;

    cout << "How many students is in your class: ";
    cin >> numOfStudents;

    cout << "How many sweets your mother bought: ";
    cin >> numOfSweets;

    int numOfSweetsForEach = numOfSweets / (numOfStudents - 1);
    int numOfSweetsJohnny = numOfSweets - numOfSweetsForEach * (numOfStudents - 1);

    cout << "Number of candies for each user: " << numOfSweetsForEach << endl;
    cout << "Number of candies for little Johnny: " << numOfSweetsJohnny << endl;

    return 0;
}
