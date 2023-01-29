#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    vector <int> wektor;
    cout << "Podaj 10 elementow wektora: ";
    for (int i = 0; i < 10; i++) {
        cin >> x;
        wektor.push_back(x);
    }

    for (int i = 0; i < wektor.size(); i++) {
        cout << wektor.at(i) << " ";
    }
    cout << endl;
    for (int i = 0; i < wektor.size(); i++) {
        wektor.at(i) *= wektor.at(i);
        cout << wektor.at(i) << " ";
    }
    cout << endl;

    return 0;
}