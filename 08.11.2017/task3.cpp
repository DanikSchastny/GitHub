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
	for (int i = 0; i < b - 1; ++i)
	{
		if (a[i] <  a[i + 1])
		{
			k++;
			cout << a[i] << " " << a[i + 1] << endl;
		}
		if (a[i] > a[i + 1])
		{
			j++;
		}
		if (a[i] == a[i + 1])
		{
			f++;
		}
		cout << "k=" << k << " f=" << f << " j=" << j << endl;
	}
		
	
	if (k > 0 && j == 0 && f == 0) cout << "strictly growing";
	else if (k > 0 && j == 0 && f > 0) cout << "growing, not strictly";
	else if (j > 0 && k == 0 && f == 0) cout << "getting smaller, strictly";
	else if (j > 0 && k == 0 && f > 0) cout << "getting smaller, not strictly";
	else cout << "Monotone" << endl;

	cout<<endl;
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
