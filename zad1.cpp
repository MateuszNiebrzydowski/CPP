﻿#include <iostream>
using namespace std;

int main() {
	int n, suma = 0;
	cout << "Insert value of n: ";
	cin >> n;

	for (n; n >= 1; n--) {
		for (int i = 1; i <= n; i++) {
			suma += i;
		}
	}

	cout << "The sum of all results is: " << suma << endl;

	return 0;
}