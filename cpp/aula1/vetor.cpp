#include <iostream>

using namespace std;

float dados[10] = {21.5, 25.5, 14.5, 15.8, 17.6, 8.9, 9.6, 18.6, 17, 12};
int n = 10;

int main()
{
	cout << "Vetor original: " << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "[" << i << "]\t" << dados[i] << endl;
	}

	// bubblesort
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (dados[j] > dados[j + 1])
			{
				swap(dados[j], dados[j + 1]);
			}
		}
	}
	
	cout << "Vetor ordenado:" << endl;

	for (int i = 0; i <= n - 1; i++)
	{
		cout << "[" << i << "]\t" << dados[i] << endl;
	}
	return 0;
}