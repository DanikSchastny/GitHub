#include<iostream>
#include"mstring.h"
#include"number.h"

using namespace std;


int main(int argc, char *argv[])
{
	
	char str[256], substr[256];
	
		cout << "Enter the 1st string:" << endl;
		cin.getline(str, 256);
		cout << "Enter the substring:" << endl;
		cin.getline(substr, 256);
		resSubstringEnterence(substringEntrence(str, substr), str);
	
	system("pause");
	return 0;
}
