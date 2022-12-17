#include <iostream>
using namespace std;

int ileZgodnych(int tablica1[], int tablica2[], int rozmiar) {
	int suma = 0;
	for (int i = 0; i < rozmiar; i++) {
		if (tablica1[i] == tablica2[i]) {
			cout << i << endl;
			suma++;
		}
	}
	return suma;
}

int main() {
	int tab1[5] = { 0, 3, 1, 2, 3 };
	int tab2[5] = { 1, 3, 2, 2, 3 };
	int rozmiar = sizeof(tab1) / sizeof(int);

	int result = ileZgodnych(tab1, tab2, rozmiar);
	cout << endl << result << endl;

	return 0;
}