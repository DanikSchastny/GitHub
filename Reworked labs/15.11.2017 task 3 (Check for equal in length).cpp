#include<iostream>

int lengthStr(char *str);

void equivalenceRelation(char *str, char *secStr);

using namespace std;

int main()
{
	char str[256];
	cout << "Enter your string:" << endl;
	cin.getline(str, 256);

	char secStr[256];
	cout << "Enter the second string:" << endl;
	cin.getline(secStr, 256);


	equivalenceRelation(str, secStr);

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

void equivalenceRelation(char *str, char *secStr)
{
	if (lengthStr(str) == lengthStr(secStr))
		cout << "Strings are equal in length!" << endl;
	else
		lengthStr(str) > lengthStr(secStr) ? cout << "The first string is bigger in length!" << endl :
		cout << "The second string is bigger in length" << endl;
}



