#include<iostream>
#include<cmath>
using namespace std;

int main()
 {
 	cout<<"Enter n"<<endl;
 	int n;
 	cin>>n;
 	
 	 double sum=0;
 	 double term=0;
 	
 	for(int i=1; i<=n; ++i)
 	 {
 	 	term = 1 / pow(i,5);
 	 	sum = sum + term;
 	 }
 	cout<<sum;
   return 0;
 }

