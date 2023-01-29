#include <iostream>

using namespace std;

int foo(int a)
{
	if (a == 0 || a == 1)
		return 2;
	return foo(a - 2) + 1;
}

int main()
{
	int a = 7; //a=7
	cout << a << endl;
	int b = (a += 6); // a=13  , b=13
	cout << a << " " << b << endl;
	int c = (b *= 2) / 3; // a=13  , b=26  , c=8
	cout << a << " " << b << " " << c << endl;
	b = foo(a);  // a=13  , b=8  , c=8
	cout << a << " " << b << " " << c << endl;
	c = ++b;  // a=13  , b=9  , c=9
	cout << a << " " << b << " " << c << endl;
	return 0;
}