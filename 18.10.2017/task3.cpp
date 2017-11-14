#include<iostream>

long long AddingAndReversing();
void Search(long long a);

int main(int argc, const char argv[])
{
	long long number = AddingAndReversing();
	Search(number);
	system("pause");
	return 0;
}
long long AddingAndReversing()
{
	using namespace std;
	long long number;
	cout << "Enter your number" << endl;
	cin >> number;
	if (number < 0) return number * -1;
	else return number;
}


void Search(long long a)
{
	using namespace std;
	long long numb = a;
	int numeral = 0, m = 1, p = 0, m1 = 0, p1 = 0;
	while (numb > 0)
	{
		
		p = numb % 10;
		numb /= 10;
		if (p == numb % 10)
		{
			++m;
			p1 = p;
		}
		else
		{
			p1 = p;
			m = 1;
		}
		if (m > m1)
		{
			m1 = m;
			numeral = p;
		}
	}
	cout << "The max lenth is " << m1 << " " << "with numeral " << numeral << endl;
}
