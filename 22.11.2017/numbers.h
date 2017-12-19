
#pragma once

using namespace std;

void arraySwap(char *a, int b);

double addingBase();

int addingInt();

void swap(int *a, int *b);

void equalResult(int a);

void translation(char *result, double n, int b);

char translationFromIntToChar(int x);

void arraySwap(char *a,int b)
{
	char t;
	for (int i = 0; i < b; ++i)
	{
		for (int j = 0; j < b-i ; ++j)
		{
			t = a[j +1];
			a[j +1] = a[j];
				a[j] = t;

		}
	}

	a[b + 1] = '\0';
}
char translationFromIntToChar(int x)
{
	switch (x)
	{
	case 0 :
		return '0';
	case 1:
			return '1';
	case 2:
		return '2';
	case 3:
		return '3';
	case 4:
		return '4';
	case 5:
		return '5';
	case 6:
		return '6';
	case 7:
		return '7';
	case 8:
		return '8';
	case 9:
		return '9';
	case 10:
		return 'A';
	case 11:
		return 'B';
	case 12:
		return 'C';
	case 13:
		return 'D';
	case 14:
		return 'E';
	case 15:
		return 'F';
	}
}
void translation(char *result, double n, int b)
{
	double numb = n, q = 0;
	int length = 0, base = b, i = 0, x = (int)numb, d = 0;
	double g = numb - double(x);

	int figure;

	while (x > 0)
	{
		figure = x % base;
		x /= base;

		result[i] = translationFromIntToChar(figure);
		++i;
	}
	arraySwap(result, i-1);
	cout << result[i-1] << endl;
	result[i-1] = '.';

	cout << result << endl;
	q = g*base;
	for (int k = 1; k < 3; ++k)
	{
		
		d = int(q);
		q = g*base;

		result[i + 1 + k] = translationFromIntToChar(d);
	}
}
double addingBase()
{
	double m;
	while (true)
	{
		cout << "Enter the base of counting system:" << endl;
		cin >> m;

		if (m >= 2 && m <= 16)
			return m;
		else
			cout << "Your base doesn't fits" << endl;
	}
}
void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int addingInt()

{
	int n;
	while (true)
	{
		cout << "Enter natural N, N> 0" << endl;
		cin >> n;
		if (n > 0) return n;
	}
}
void equalResult(int a)
{
	if (a) cout << "They not are equal";

	else cout << "They are equal";
}
