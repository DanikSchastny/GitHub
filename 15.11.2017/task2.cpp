#include<iostream>
#include"mstring.h"
#include"number.h"

using namespace std;

int main(int argc, char *argv[])
{
	
	char a[256], b[256];
	
		cout << "Enter the 1st string:" << endl;
		cin.getline(a, 256);
		cout << "Enter the 2nd string:" << endl;
		cin.getline(b, 256);
		int f = equalTest(a, b);
		equalResult(f);
		

	system("pause");
	return 0;
}

/*  mstring.h

int equalTest(char *a, char *b)                
{
if (lengthStr(a) == lengthStr(b))
{
int i = 0, k = 0;
while (a[i] != '\0')
{
if (a[i] != b[i]) ++k;
++i;
}
return k;
}
else return 10;
}

number.h

void equalResult(int a)
{
if (a) cout << "They not are equal";

else cout << "They are equal";
}

*/
