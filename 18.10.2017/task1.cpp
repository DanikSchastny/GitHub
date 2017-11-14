#include<iostream>
using namespace std;
int CountingNumeral(long long number);
void CheckOnPalindrome(long long number, int count);

int main(int argc, const char *argv[])
{
	while (true)
	{
		long long number;
		cout << "Enter your number:" << endl;
		cin >> number;
		int count = CountingNumeral(number);
		CheckOnPalindrome(number, count);


		char repeat;
		cout << "Would you like to repeat? Y/N" << endl;
		cin >> repeat;
		if (repeat == 'N') break;
	}
	system("pause");
	return 0;
}

int CountingNumeral(long long number)
{
	int j = 0;
	long long f = number;
	while (abs(f) > 0)
	{
		f = f / 10;
		++j;
	}
	return j;
}

void CheckOnPalindrome(long long number, int count)
{
	long long a = number, b = 0;
	for (int i = 1; i <= count; ++i)
	{
		b *= 10;
		b += a % 10;
		a /= 10;
	}
	if (b == number) cout << "Your number is a palindrome!" << endl;
	else cout << "Your number is not a palindrome!" << endl;
}
