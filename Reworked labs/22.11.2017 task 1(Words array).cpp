#include<iostream>

#define N

int lengthStr(char *str);

bool checkForSymb(char a);

void creatingWordsArr(char *str, char words[256][256], int &number);

void creatingWords(char words[256][256], char *str, int &jump, int &number, int position);

void displayWordArray(char words[256][256], int number);

using namespace std;

int main()
{
	char str[256];
	cout << "Enter your string:" << endl;
	cin.getline(str, 256);

	char words[256][256];

	int number = 0;
	creatingWordsArr(str, words, number);

	displayWordArray(words, number);

	system("pause");
	return 0;
}

void displayWordArray(char words[256][256], int number)
{
	for (int i = 0; i < number; ++i)
	{
		cout << i + 1 << ' ' << "word: ";
		int l = 0;
		while (checkForSymb(words[i][l]))
		{
			cout << words[i][l];
			++l;
		}
		cout << endl;
	}
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

void creatingWordsArr(char *str, char words[256][256], int &number)
{
	number = 0;
	for (int i = 0; i < lengthStr(str); ++i)
	{
		int j = 0;

		if (checkForSymb(str[i]))
		{
			creatingWords(words, str, j, number, i);
			i += j;
		}
	}
}

void creatingWords(char words[256][256], char *str, int &jump, int &number, int position)
{
	int i = position, j = 0;

	while (checkForSymb(str[i]))
	{
		words[number][j] = str[i];
		++j;
		++i;

		cout << '+' << endl;
	}

	number += 1;
	jump += j;
}



bool checkForSymb(char a)
{
	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return true;
	else
		return false;
}


















