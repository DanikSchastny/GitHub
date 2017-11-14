#include<iostream>
using namespace std;

double Entering_n();
double Entering_E();
double counting(double N, double E);

int main(int argc, char *argv[])
{
	double N = Entering_n(), E = Entering_E();

	cout << counting(N, E);
	system("pause");
	return 0;
}

double Entering_n()
{
	double N;
	while (true)
	{
		cout << "Enter n, n>0" << endl;
		cin >> N;
		if (N > 0) return N;
	}
}
double Entering_E()
{
	double E;
	while (true)
	{
		cout << "Enter E, E>0" << endl;
		cin >> E;
		if (E > 0) return E;
	}
}
double counting(double N, double E)
{
	double Y1 = 1, Ynext;
	while (true)
	{
		Ynext = 0.5 * (Y1 + N / Y1);
		if(abs(Y1 - Ynext) >= E) Y1 = Ynext;
		else return Ynext;
	}
}
