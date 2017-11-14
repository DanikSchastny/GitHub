#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int a=1, b=1;
	while(true)
	{
		a=a+b;
		b=a-b;
		if(a>100)
		{
			break;
		}
	
	}
	cout<<a;
	return 0;
}
