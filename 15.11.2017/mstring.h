#pragma once
using namespace std; 

int lengthStr(char *a);
int equalTest(char *a, char *b);
void equalOrderTest(char *a, char *b);
void resSubstringEnterence(int k,char *a);
bool checkForSymb(char a);
void changingStr(char* a, char* b, int m);



void changingStr(char* a, char* b, int m)
{
	int length = 1, pos = 0;
	for (int i = 0; i < lengthStr(a); ++i)
	{
		if (checkForSymb(a[i]))
		{
			for (int n = i; true; ++n)
			{
				if (checkForSymb(a[n])) ++length;
				else break;
			}

			cout << length << endl;
			if (length - 1 == m)
			{
				for (int k = pos, m = 0; k < pos + length; ++k, ++m)
				{
					a[k] = b[m];
					cout << '+';
				}
			}
			length = 0;
		}
	}
}
bool checkForSymb(char a)
{
	int number;
	number = a;
	if ((number >= 65 && number <= 90) || (number >= 97 && number <= 122))
		return true;
	else return false;
}

void resSubstringEnterence(int k, char *a)
{
	
	if (k + 1 >  lengthStr(a))
	{
		cout << k + 1 << " " << lengthStr(a) << endl;
		cout << "There is no substring in your string" << endl;
	}
	else
	{
		cout << k + 1 << " " << lengthStr(a) << endl;
		cout << "Your substring begins on the " << k + 1 << " position" << endl;
	}
}
void equalOrderTest(char *a, char *b)
{
	int k = 0;
	if (lengthStr(a) == lengthStr(b)) k = 1;
	else if (lengthStr(a) > lengthStr(b)) k = 2;
	else if ((lengthStr(a) < lengthStr(b))) k = 3;
	switch (k)
	{
	case 1: cout << "both strings are equal" << endl;
		break;
	case 2: cout << "The first string is bigger than the second" << endl;
		break;
	case 3: cout << "The second string is bigger than the first" << endl;
		break;
	default: cout << "Error!" << endl;
	}
}
int lengthStr(char *a)
{
	int k = 0;
	while (a[k])
	{
		++k;
	}
	return k;
}
int equalTest(char *a, char *b)
{
	if (lengthStr(a) == lengthStr(b))
	{
		int i = 0, k = 0;
		while (a[i] != '\0')
		{
			if (a[i] != b[i]) ++k;
			++i;
		}
		return k;
	}
	else return 10;
}

