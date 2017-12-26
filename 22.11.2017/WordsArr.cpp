#include<iostream>
#define N 256

void displayWordsArray(char arr[][N], int count);

bool checkForSymb(char a);

void creatingWordArray(char words[][N], char arr[], int &count);
using namespace std;


int main()
{

	int count = 0;

	char words[N][N];
	char str[256];

	cout << "Enter your substring:" << endl;
	cin.getline(str, 256);

	creatingWordArray(words, str, count);
	displayWordsArray(words, count);

	system("pause");
	return 0;
}

bool checkForSymb(char a)
{
	if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
		return true;
	else
		return false;
}

void creatingWordArray(char words[][N], char arr[], int &count)
{
	int i = 0;
	int j = 0;
	int l = 0;
	while (arr[i])
	{
		if (checkForSymb(arr[i]))
		{
			words[count][l] = arr[i];
			++l;
		}

		else
		{
			l = 0;
			++count;
		}
	}
}

void displayWordsArray(char arr[][N], int count)
{
	int j = 0;
	for (int i = 0; i < count; ++i)
	{
		while (arr[count][j])
		{
			cout << arr[count][j];
			++j;
		}
		j = 0;
		cout << endl;
	}
}