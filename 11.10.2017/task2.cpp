#include<iostream>
using namespace std;
int Adding_N();
void Checking(int number);

int main(int argc, char *argv[])
{
	int number = Adding_N();
	Checking(number);

	system("pause");
	return 0;
}

int Adding_N()
{
	int number;
	while (true)
	{
		cout << "Enter your number, which is more than 0" << endl;
		cin >> number;
		if (number > 0) return number;
	}
}

void Checking(int number)
{
	int i,q=0, half = number / 2;
	cout << "half = " << half << endl;
	for (int j = 2; j < half; ++j)
	{
		i = number % j;
		cout << number << "%" << j << "=" << half % j << endl;
		if (!i)
		{
			q = 1;
			break;
		}
	}
		
	if (q == 1) cout << "complex" << endl;
	else cout << "simple " << endl;
} 
