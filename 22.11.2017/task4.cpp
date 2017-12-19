#include<iostream>
#include"numbers.h"
#include"mstring.h"


using namespace std;

int main(int argc, char* argv[])
{
	
	char str[256];

	cout << "Enter your string:" << endl;
	cin.getline(str, 256);

	int length;

	cout << "Enter the length of substrings, that you want to delete:" << endl;
	cin >> length;

	deletingSubstr(str, length);
	cout << str << endl;
	system("pause");
	return 0;
}

