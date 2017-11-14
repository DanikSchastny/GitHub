#include<iostream>
#include<cmath>
using namespace std;

int main()
 {
 	cout<<"Enter n"<<endl;
 	int n;
 	cin>>n;
 	
 	double term=0;
 	double sum=0;
 	
 	for(int i=1; i<=n; ++i)
 	 {
 	 	term = pow(-1,i)/(2*i+1);
 	 	sum = sum + term;
 	 }
 	cout<<sum;
   return 0;
  }
