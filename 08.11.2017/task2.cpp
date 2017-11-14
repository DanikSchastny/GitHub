#include<iostream>
using namespace std;
int AddingNumber(int N);
void AddingArrayElements(int a, int b[]);
void ShowingResult(int a[], int b,int x);
int main(int argc, const char argv[])
{
	const int N = 100;
	int n = AddingNumber(N);
	int a[N];
	AddingArrayElements(n, a);
		int x;
		cout << "Enter your number:" << endl;
		cin >> x;
	ShowingResult(a, n,x);
	system("pause");
	return 0;
}
void ShowingResult(int a[], int b, int c)
{
	int t = 0;
	for (int i = 0; i < b; ++i)
	{
		if (a[i] < c)  t++;
	}
	cout << "Your array has " << t << " elemets smaller than" << c;
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
