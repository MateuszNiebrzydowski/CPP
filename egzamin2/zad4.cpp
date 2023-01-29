#include <iostream>
using namespace std;

int zad4(int tab[], int size) {
    int nparz = 0;
    for (int i = 0; i < size; i++) {
        if (tab[i] % 2 != 0) {
            nparz++;
        }
    }
    return nparz;
}

int main()
{
    int tab[5] = { 2, 21, 37, 420, 69 };
    int size = 5;
    cout << zad4(tab, size) << endl;

    return 0;
}