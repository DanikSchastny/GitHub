#include<iostream>

int lengthStr(char *str);

int enteringLength(char *str);

void swap(char &a, char &b);

bool checkForSymb(char a);

int subStrLen(char *str, int position);

void deleteWord(char *str, int position, int length);

void deletingWords(char *str, int length);

void deletingSpaces(char *str, int position, int length);



using namespace std;

int main()
{
	char str[256];
	cout << "Enter your substring:" << endl;
	cin.getline(str, 256);

	int length = enteringLength(str);

	deletingWords(str, length);

	cout << str;

	system("pause");
	return 0;
}

int subStrLen(char *str, int position)
{
	int i = position;
	int length = 0;

	while (checkForSymb(str[i]))
	{
		++length;
		++i;
	}
	return length;
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

		if (length > 0 && length <= lengthStr(str))
			break;
	}
	return length;
}

void swap(char &a, char &b)
{
	char t = a;
	a = b;
	b = t;
}

bool checkForSymb(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return true;
	else
		return false;
}

void deletingWords(char *str, int length)
{
	int substrL;
	for (int i = 0; i < lengthStr(str); ++i)
	{
		if (checkForSymb(str[i]))
		{
			substrL = subStrLen(str, i);
			if (substrL == length)
			{
				deleteWord(str, i, substrL);
				deletingSpaces(str, i, length);
			}
			else
				i += substrL;
		}
	}
}

void deleteWord(char *str, int position, int length)
{
	for (int j = 0; j < length; ++j)
	{
		for (int i = position; i < position + length; ++i)
			str[i] = str[i + 1];
	}

}

void deletingSpaces(char *str, int position, int length)
{
	for (int j = 0; j < length; ++j)
	{
		for (int i = position + 1; i < lengthStr(str) - 1; ++i)
		{
			str[i] = str[i + 1];
		}
		str[lengthStr(str) - 1] = '\0';
	}
}























