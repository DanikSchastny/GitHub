#include<iostream>
using namespace std;
int main()
 {
 	int n;
 	cout<<"Enter n";
 	cin>>n;
 	 double ans=1;
 	 double slag;
 	 int i=1;
 	  while(i<n+1)
 	   {
 	   	slag=(1+1/(i*i));
 	   	ans=ans*slag;
 	   }
 	   cout<<ans;
 	   return 0;
 }
