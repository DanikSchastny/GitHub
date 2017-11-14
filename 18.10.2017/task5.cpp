#include<iostream>

int AddingNumeral1();
long long Adding();
long long Changing(long long a, int x);
void ShowingResult(long long a, long long b);
int main(int argc, const char *argv[])
{
	long long number = Adding();
	long long n1 = number;
	if (number < 0)
	{
		number = number * -1;
	}
	int a = AddingNumeral1();
	ShowingResult(Changing(number, a), n1);
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
long long Changing(long long a, int x)
{
	using namespace std;
	long long numb = 0, numb1 = a;
	int f = x, i = 0, j=1;
	while (numb1 > 0)
	{
		j = pow(10, i);
		if (numb1 % 10 == f) --i;
		else
		{
			numb += numb1 % 10 * j;
		}
		++i;
		numb1 /= 10;
	}
	return numb;
}
void ShowingResult(long long a, long long b)
{
	using namespace std;
	long long x = a;
	cout << x << endl;
}
int AddingNumeral1()
{
	using namespace std;
	int a;
	while (true)
	{
		cout << "Enter the numeral you want to delete" << endl;
		cin >> a;
		if (a < 10 && a>0)
		{
			return a;
		}
	}
}
