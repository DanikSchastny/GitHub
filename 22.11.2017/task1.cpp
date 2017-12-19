#include<iostream>
#include"mstring.h"


using namespace std;

int main(int argc, char* argv[])
{
	char str[256];

	cout << "Enter your string:" << endl;
	cin.getline(str, 256);

	char substr[256];

	cuttingForWords(str);

	cout << str << endl;


	

	system("pause");
	return 0;
}

