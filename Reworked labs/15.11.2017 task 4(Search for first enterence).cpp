#include<iostream>

int lengthStr(char *str);

int searchFirstEnt(char *str, char *subStr);

bool stringComparison(char *str, char *subStr, int position);

using namespace std;

int main()
{
	char str[256];
	cout << "Enter your substring:" << endl;
	cin.getline(str, 256);

	char subStr[256];
	cout << "Enter the substring:" << endl;
	cin.getline(subStr, 256);

	if (lengthStr(str) >= lengthStr(subStr))
	{
		int result = searchFirstEnt(str,subStr);

		if (result != -1)
			cout << "The first enterence is on a " << result << " position" << endl;
		else
			cout << "There is no such substring in your string!" << endl;
	}


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

int searchFirstEnt(char *str, char *subStr)
{
	for (int i = 0; i < lengthStr(str); ++i)
	{
		if (str[i] == subStr[0])
		{
			if (stringComparison(str, subStr, i))
				return i;
		}
	}

	return -1;
}

bool stringComparison(char *str, char *subStr, int position)
{
	int length = lengthStr(subStr);
	
	for (int i = 0; i < position + length; ++i)
	{
		if (str[i + position] != subStr[i])
		{
			return false;
		}
	}
	return true;
}





