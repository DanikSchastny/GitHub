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
		
		int number;
		while (true)
		{
			cout << "Enter the number of symbols in the word:" << endl;
			cin >> number;

			if (number <= 0) cout << "Your number is to small. Try again:" << endl;
			else break;
		}
		changingStr(str, substr, number);

		cout << str;

	
	system("pause");
	return 0;
}


