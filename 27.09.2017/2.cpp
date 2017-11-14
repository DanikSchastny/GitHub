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
	double sum= 1;
	 double result = 1;
	 double term = 0;
	 double term1 = 1;
	for(int i =1; i<=n; ++i)
	{
	 for (int j = 1; j<=i; ++j)
	  {
	  	term1 *= i;
	  }
	  term = (1+ 1./term1);
	  sum*=term;
	}
	cout<<"sum = "<<sum<<endl;
	return 0;
}
