#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Podaj ilosc wyrazow ciagu: ";
    cin >> n;
    
    double a;
    vector<int> wektor;
    
    for (int i = 1; i <= n; i++) {
        cout << "Podaj wyraz ciagu nr " << i << ": ";
        cin >> a;
        if (int(a) == a) {
            wektor.push_back(a);
        }
    }

    cout << endl;

    for (int i = 0; i < wektor.size(); i++) {
        cout << wektor.at(i) << " ";
    }

    cout << endl;

    return 0;
}