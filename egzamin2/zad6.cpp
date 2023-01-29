#include <iostream>
using namespace std;

void zad6(int n) {
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if ((i * i + j * j == n) && (i <= j)) {
                cout << n << " = " << i << "*" << i << " + " << j << "*" << j << endl;
            }
        }
    }
    return;
}
int main()
{
    zad6(58);

    return 0;
}