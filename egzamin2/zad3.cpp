#include <iostream>
using namespace std;

int zad3(int n) {
    for (int i = 0; i <= n; i++) {
        if (i * i == n) {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Podaj liczbe calkowita: ";
    cin >> n;
    cout << zad3(n) << endl;
    
    return 0;
}