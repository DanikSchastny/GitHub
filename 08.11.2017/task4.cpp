#include<iostream>
using namespace std;
int AddingNumber(int N);
void AddingArrayElements(int a, int b[]);
void ShowingResult(int a[], int b);
int main(int argc, const char argv[])
{
	const int N = 100;
	int n = AddingNumber(N);
	int a[N];
	AddingArrayElements(n, a);
	ShowingResult(a, n);
	system("pause");
	return 0;
}
void ShowingResult(int a[], int b)
{
	int k = 0, j = 0, f = 0;
	for (int i = 0; i < b ; ++i)
	{
		if (a[i] > 0) k++;
		if (a[i] < 0) j++;
		if (a[i] == 0) f++;
	}

	cout << "Your array has " << k << " elements bigger than 0" << endl;
	cout << "Your array has " << j << " elements smaller than 0" << endl;
	cout << "Your array has " << f << " elements, which are 0" << endl;
}
int AddingNumber(int N)
{
	int n;
	while (true)
	{
		cout << "Enter the number of array's elements:" << endl;
		cin >> n;
		if (n > 0 && n < N) return n;
	}
}
void AddingArrayElements(int a, int b[])
{
	for (int i = 0; i < a; ++i)
	{
		cout << "Enter a[" << i + 1 << "] :" << endl;
		cin >> b[i];
	}
}
