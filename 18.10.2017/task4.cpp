#include<iostream>

int AddingNumeral1();
int AddingNumeral2();
long long Adding();
long long Changing(long long a,int x, int b);
void ShowingResult(long long a, long long b);
int main(int argc, const char *argv[])
{
	long long number = Adding();
	long long n1 = number;
	if (number < 0)
	{
		number = number * -1;
	}
	int a = AddingNumeral1(), b = AddingNumeral2();
	ShowingResult(Changing(number, a, b), n1);
	system("pause");
	return 0;
}

long long Adding()
{
	using namespace std;
	long long number;
	cout << "Enter your number" << endl;
	cin >> number;
	return number;
}

long long Changing(long long a, int x, int b)
{
	using namespace std;
	long long numb = a, numb1 = a;
	int f = x, z = b, i = 0, j;
	while (numb1 > 0)
	{
		j = pow(10, i);
		if (numb1 % 10 == f) numb = numb - f * j + z * j;
		++i;
		numb1 /= 10;
	}
	return numb;
}
void ShowingResult(long long a, long long b)
{
	using namespace std;
	long long x = a;
	if (b < 0) cout << " Changed number is " << -1 * x << endl;
	else cout << " Changed number is " << x << endl;
}
int AddingNumeral1()
{
	using namespace std;
	int a;
	while (true)
	{
		cout << "Enter the numeral you want to change" << endl;
		cin >> a;
		if (a < 10 && a>0)
		{
			return a;
		}
	}
}
int AddingNumeral2()
{
	using namespace std;
	int a;
	while (true)
	{
		cout << "Enter the numeral to which you want to change" << endl;
		cin >> a;
		if (a < 10 && a>0)
		{
			return a;
		}
	}
}
