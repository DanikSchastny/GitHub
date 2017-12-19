#include<iostream>
#include"mstring.h"


using namespace std;

int main(int argc, char* argv[])
{
	char str[256];

	cout << "Enter your string:" << endl;
	cin.getline(str, 256);

	char substr[256];

	cout << "Enter the substring:" << endl;
	cin.getline(substr, 256);

	int length;

	cout << "Enter the length of substrings, that you want to change:" << endl;
	cin >> length;

	substrSubstitution(str, substr, length);

	cout << str << endl;

	system("pause");
	return 0;
}





