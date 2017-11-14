#include<iostream>
using namespace std;

double factorial(double f);
double numerator(double q);

int main()
{
	cout << "Enter n: \n";
    int n;
	double sum = 0;
	cin >> n;
	for (double i = 1; i <= n; ++i)
	{
		sum = sum + factorial(i) / numerator(i);
	}

	cout << sum;


	return 0;
}

double numerator(double q)
{
	double numerator = 0;

	for (double i = 1; i <= q; i = i + 1)
	{
		numerator = numerator + 1 / i;
	}

	return numerator;
}

double factorial(double f)
{
	int factorial = 1;
	for (int i = 1; i <= f; i = i + 1)
	{
		factorial = factorial * i;
	}

	return factorial;
}
