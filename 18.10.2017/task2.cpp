#include<iostream>
using namespace std;
int CountingNumeral(long long n);
void Choosing(long long n, int a);
long long Invertion(long long number, int count);


int main(int argc, const char *argv[])
{
		long long number;
		cout << "Enter your number:" << endl;
		cin >> number;
		int numb = CountingNumeral(number);
		number = Invertion(number, numb);
		Choosing(number, numb);
	system("pause");
	return 0;
}
void Choosing(long long n, int a)
{
	long long numb = n;
	int k=0, f=0, j=0;
	while (abs(numb) > 0)
	{
		if (numb % 10 < (numb / 10) % 10) ++k;
		if (numb % 10 > (numb / 10) % 10) --f;
		if (numb % 10 == (numb / 10) % 10) ++j, k++, --f;
		numb /= 10;
    }

	if (k + 1 == a)
	{
		if (j > 0) cout << "Increasing not strictly" << endl;
		else cout << "Increasing strictly" << endl;
	}
	else if (f == -a)
	{
		if(j > 0) 
		cout << "Decreasing not strictly" << endl;
		else cout << "Decreasing strictly " << endl;
	}
	else cout << "monotonous"<<endl;
 
}

int CountingNumeral(long long n)
{
	int j = 0;
	long long numb = n;
	while (abs(numb) > 0)
	{
		numb /= 10;
		++j;
	}
	return j;
}

long long Invertion(long long number, int count)
{
	long long a = number, b = 0;
	for (int i = 1; i <= count; ++i)
	{
		b *= 10;
		b += a % 10;
		a /= 10;
	}
	return b;
}

