#include <iostream>
using namespace std;

int zad4(int tab[], int size) {
    int wartosc = 0, indeks = 0;
    for (int i = 0; i < size; i++) {
        if (((tab[i] > wartosc) || (tab[i] < wartosc && wartosc == 0)) && (tab[i] % 2 != 0)) {
            wartosc = tab[i];
            indeks = i;
        }
    }
    if (wartosc == 0) {
        return -1;
    }
    return indeks;
}

int main()
{
    int tab[5] = { 158, 54, 996, -126, 1 };
    cout << zad4(tab, 5) << endl;

    return 0;
}