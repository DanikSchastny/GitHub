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
 	 	term=1/pow(2*i+1,2);
 	 	sum = sum + term;
 	 }
 	cout<<sum;
   return 0;
  }
