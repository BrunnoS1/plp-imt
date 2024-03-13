#include <iostream>

using namespace std;

int main()
{
	int n;
	bool primo = true;
	cout << "Digite um numero: ";
	cin >> n;

	if (n <= 1)
	{
		primo = false;
	}
	else
	{
		for (int i = 2; i < n / 2; i++)
		{
			if (n % i == 0)
			{
				primo = false;
				break;
			}
		}
	}
	
	if (primo)
	{
		cout << n << " e primo" << endl;
	}
	else
	{
		cout << n << " nao e primo" << endl;
	}
}