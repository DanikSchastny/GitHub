#include<iostream>
#include<cmath>
using namespace std;

int main()
 {
 	cout<<"Enter n"<<endl;
 	int n;
 	cin>>n;
 	
 	double sum=0, nume =0, denom=0, term=0;
 	
 	for(int i=1; i<=n; ++i)
 	 {
 	 	nume = pow(-1,i+1);
 	 	denom = i*(i+1);
 	 	term = nume / denom;
 	 	sum = sum + term;
 	 }
  cout<<sum;
 return 0;	
 }
