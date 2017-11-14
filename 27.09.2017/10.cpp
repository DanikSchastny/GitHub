#include<iostream>
#include<cmath>
using namespace std;

int checking();

int main()
{
	double sum = 0;
	double den = 0;
	int n = checking();
	for (int i = 1; i <= n; ++i)
	{
		for (int k = 1; k <= i; ++k)
		{
			den = den + sin(k);
		}

		sum = sum + 1 / den;
	}

	cout << sum << endl;
	
	system("pause");
}

int checking()
{
	int n;
	while (1)
	{
		cout << "Enter n:" << endl;
		cin >> n;
		if (n > 0)
			break;
	}
	return n;
}
