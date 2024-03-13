#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Digite um numero: ";
	cin >> n;
	int fat = n;

	for (int i = n-1; i > 0; i--)
	{
		fat *= i;
	}

	cout << n << "! = " << fat;
}