#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Podaj trzy liczby calkowite: ";
    cin >> a >> b >> c;

    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
        cout << "Liczby spelniaja twierdzenie Pitagorasa" << endl;
    }
    else {
        cout << "Liczby nie spelniaja twierdzenia Pitagorasa" << endl;
    }
    
    return 0;
}
