#include<iostream>

int lengthStr(char *str);

bool checkingForEqual(char *str, char *secStr);

bool checkForEqualLetters(char a, char b);

using namespace std;

int main()
{
	char str[256];
	cout << "Enter your substring:" << endl;
	cin.getline(str, 256);

	char secStr[256];
	cout << "Enter your substring:" << endl;
	cin.getline(secStr, 256);

	bool z = false;

	if (lengthStr(str) == lengthStr(secStr))
	{
		z=checkingForEqual(str,secStr);
	}

	if (z)
	{
		cout << "Strings are equal!" << endl;
	}
	else
	{
		cout << "Strings are not equal!" << endl;
	}

	char a = 'a';

	int b = a;
	cout << b;

	system("pause");
	return 0;
}

int lengthStr(char *str)
{
	int i = 0;
	while (str[i])
	{
		++i;
	}
	return i;
}

bool checkingForEqual(char *str, char *secStr)
{
	for (int i = 0; i < lengthStr(str); ++i)
	{
		if (str[i] != secStr[i])
		{
			if (!checkForEqualLetters(str[i], secStr[i]))
			{
				return false;
			}
		}
	}

	return true;
}

bool checkForEqualLetters(char a, char b)
{
	if (a >= 'A' && a <= 'Z'  && b >= 'a' && b <= 'z' || a >= 'a' && a <= 'z' && b >= 'A' && b <= 'Z')
	{
		if (abs(a - b) == 32)
			return true;
		else
			return false;
	}
}
