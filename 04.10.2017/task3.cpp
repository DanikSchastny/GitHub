#include<iostream>
#include<cmath>

double Checking_a();
double Checking_b(double a);
double Checking_h(double a, double b);
double Checking_E();
double AlternativeSinus(double x, double E);
int fact(int i);
void CreateTable(double a, double b, double E, double h);

int main(int argc, char *argv[])
{
	double a = Checking_a();
	double b = Checking_b(a);
	double h = Checking_h(a, b);
	double E = Checking_E();
	CreateTable(a, b, E, h);

	system("pause");
	return 0;
		
}

double Checking_a()
{
	using namespace std;
	double a;
		cout << "Enter a" << endl;
		cin >> a;
		return a;
}
double Checking_b(double a)
{
	using namespace std;
	double b;
	while (true)
	{
		cout << "Enter b, b>a" << endl;
		cin >> b;
		if (b > a)
		{
			break;
		}

	}
	return b;

}
double Checking_h(double a, double b)
{
	using namespace std;
	double h;
	while (true)
	{
		cout << "Enter h < b - a" << endl;
		cin >> h;
		if (h < (b - a))
		{
			break;
		}
	}
	return h;
}
double Checking_E()
{
	using namespace std;
	double E;
	while (true)
	{
		cout << "Enter E, E>0" << endl;
		cin >> E;
		if (E > 0)
		{
			return E;
		}
	}
}

double AlternativeSinus(double x, double E)
{
	double term = 0;
	double sum = 0;
	for (int i = 1; true; ++i)
	{
		term = pow((-1), (i - 1))* pow(x, 2 * i - 1) / fact(2 * i - 1);
		if (abs(term) >= E)
		{
			sum += sum;
		}

		else return sum;
	}
}

int fact(int i)
{
	if (i == 1) return 1;
	else return i*fact(i - 1);
}

void CreateTable(double a, double b, double E, double h)
{
	using namespace std;
	double x = a;
	double eps = E;
	for (int i = 0; x<b; ++i)
	{
		x += h*i;
		cout << "x=" << x << "  " << "sin(x) =" << sin(x) << "  " << "f(x)=" << AlternativeSinus(x, eps) << endl;
		
   }
}
