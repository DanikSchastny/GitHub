#include<iostream>

int lengthStr(char *str);

int enteringLength(char *str);

void wordsReplacement(char *str, char *subStr, int length);

bool checkForSymb(char a);

bool checkingTheSize(char *str, int position, int length, int &lengthSubStr);

void wordsSwap(char *str, char *subStr, int position);

void moveToRight(int position, char *str);

void swap(char &a, char &b);

void moveToRight(char *str, int position);


using namespace std;

int main()
{
	char str[256];
	cout << "Enter your substring:" << endl;
	cin.getline(str, 256);

	char subStr[256];
	cout << "Enter the substring:" << endl;
	cin.getline(subStr, 256);

	int length = enteringLength(str);

	wordsReplacement(str, subStr, length);

	cout << str;

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

int enteringLength(char *str)
{
	int length;
	while (true)
	{
		cout << "Enter the length of words, that you want to replace" << endl;
		cin >> length;

		cout << length << ' ' << lengthStr(str) << endl;
		if (length > 0 && length <= lengthStr(str))
			break;
	}
	return length;
}

void wordsReplacement(char *str, char *subStr, int length)
{
	int substrLength;
	for (int i = 0; i < lengthStr(str); ++i)
	{
		substrLength = 0;
		if (checkForSymb(str[i]))
		{
			if (checkingTheSize(str, i, length, substrLength))
			{
				cout << i << endl;
				wordsSwap(str, subStr, i);
				i += substrLength;
			}
			else
				i += substrLength;
		}
	}
}

bool checkForSymb(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return true;
	else
		return false;
}

bool checkingTheSize(char *str, int position, int length, int &lengthSubStr)
{
	int i = position, j = 0;

	while (checkForSymb(str[i]))
	{
		++i;
		++j;
	}
	lengthSubStr += j;

	if (j == length)
		return true;
	else 
		return false;
}

void wordsSwap(char *str, char *subStr, int position)
{
	for (int i = 0; i < lengthStr(subStr); ++i)
	{
			if (str[i + position] != ' ')
				str[i + position] = subStr[i];
			else
			{
				moveToRight(i + position, str);
				str[i + position] = subStr[i];
			}

			if (i == lengthStr(subStr) - 1 && checkForSymb(str[i + position]))
			{
				while (checkForSymb(str[i + position + 1]))
				{
					moveToRight(str, i + position + 1);
				}
			}

		}

	}

void moveToRight(int position, char *str)
{
	for (int i = lengthStr(str); i > position; --i)
	{
		swap(str[i - position - 1], str[i - position]);
	}
}

void swap(char &a, char &b)
{
	char t = a;
	a = b;
	b = t;
}

void moveToRight(char *str, int position)
{
	for (int i = 0; i < lengthStr(str)-1; ++i)
	{
		swap(str[position + i + 1], str[position + i]);
		cout << str[position + i + 1] << ' ' << str[position + i] << endl;
	}
}










