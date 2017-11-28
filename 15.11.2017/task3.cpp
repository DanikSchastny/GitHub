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
		equalOrderTest(a, b);
		

	system("pause");
	return 0;
}
