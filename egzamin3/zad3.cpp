#include <iostream>
using namespace std;

string zad3(int x) {
    if (x == 0 || x == 1) {
        return "Nie jest liczba pierwsza";
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return "Nie jest liczba pierwsza";
        }
    }
    return "Jest liczba pierwsza";
}

int main()
{
    cout << zad3(4) << endl;

    return 0;
}