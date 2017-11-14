#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	double y = 0;
	for (int i = 1; i <= n; ++i)
	{
		y = sqrt(y + 2);
	}

	cout << y;
	
	system("pause");
}

