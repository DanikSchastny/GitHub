#include<iostream>
int AddingNumber(int N);
void AddingArrayElements(int a, int b[]);
void SortingBubble(int a[], int N);
void ShowingResult(int a[], int b);
int main(int argc, const char argv[])
{
	const int N = 100;
	int n = AddingNumber(N);
	int a[N];
	AddingArrayElements(n, a);
	SortingBubble(a, n);
	ShowingResult(a, n);
	system("pause");
	return 0;
}
void ShowingResult(int a[], int b)
{
	using namespace std;
	for (int i = 0; i < b; ++i)
		cout << a[i] << " ";
}
int AddingNumber(int N)
{
	using namespace std;
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
	using namespace std;
	for (int i = 0; i < a; ++i)
	{
		cout << "Enter a[" << i + 1 << "] :" << endl;
		cin >> b[i];
	}
}
void SortingBubble(int a[], int N)
{
	int n = N;
	int f = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = n-1; j >= 0; --j)
		{
			if (a[j-1] > a[j])
			{
				f = a[j - 1];
				a[j - 1] = a[j];
				a[j] = f;
			}
		}
	}
}
