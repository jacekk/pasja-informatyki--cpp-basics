#include <iostream>
#include <cstdlib>

#ifdef _WINDOWS
    #include <windows.h>
#else
    #include <unistd.h>
    #define sleep(x) usleep((x)*1000)
#endif

using namespace std;

int main()
{
    for (int i = 15; i >= 0; i--)
    {
        sleep(1e3);
        system("clear"); // "cls" for _WINDOWS
        cout << i << endl;
    }

    system("clear"); // "cls" for _WINDOWS
    cout << "Bang!" << endl;

    return 0;
}
