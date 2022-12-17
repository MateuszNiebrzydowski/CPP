#include <iostream>
using namespace std;

int tylkoLitery(string napis) {
	int suma = 0;
	for (int i = 0; i < napis.length(); i++) {
		if (!(napis[i] >= 'a' && napis[i] <= 'z') && !(napis[i] >= 'A' && napis[i] <= 'Z')) {
			napis[i] = '-';
			suma++;
		}
	}
	cout << napis << endl;
	return suma;
}

int main()
{
	string napis;
	cout << "Please insert some text: ";
	cin >> napis;

	cout << tylkoLitery(napis) << endl;

	return 0;
}