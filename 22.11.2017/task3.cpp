#include<iostream>
#include"numbers.h"
#include"mstring.h"


using namespace std;

int main(int argc, char* argv[])
{
	double base = addingBase(), num;

	cout << "Enter your number:" << endl;
	cin >> num;
	char result[256];

	translation(result, num, base);

	cout << result;
	

	
	system("pause");
	return 0;
}

