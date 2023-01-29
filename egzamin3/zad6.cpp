#include <iostream>
using namespace std;

int zad6(int n) {
    if (n / 10 - 10 * ((n / 10) / 10) == n - 10 * (n / 10)) {
        return 1;
    }
    return 0;
}

int main()
{
    cout << zad6(0) << endl;
    cout << zad6(4) << endl;
    cout << zad6(77) << endl;
    cout << zad6(234877) << endl;
    cout << zad6(2655) << endl;

    return 0;
}