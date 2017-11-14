#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int n;
	while(true)
	{
		cout<<"Enter n, n>0"<<endl;
		cin>>n;
		if(n>0)
		{
			break;
		}
	}
	 int sum = 1;
	for(int i =1; i<=n; ++i)
	{
	 sum *=2;
	}
	cout<<"sum = "<<sum<<endl;
	return 0;
}
