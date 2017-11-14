#include<iostream>
using namespace std;
int main(int argc, const char *argv[])
{
	int a,b,c;
	while(true)
	{
		cout<<"Enter the 1st Side of the triangle:"<<endl;
		cin>>a;
		if(a>0)
		{
			break;
		}
	}
		while(true)
	{
		cout<<"Enter the 2nd Side of the triangle:"<<endl;
		cin>>b;
		if(b>0)
		{
			break;
		}
	}

	while(true)
	{
		cout<<"Enter the 3d Side of the triangle:"<<endl;
		cin>>c;
		if(c>0)
		{
			break;
		}
	}
	
	if( a==b && b==c)
	{
		cout<<"The triangle is equilateral"<<endl;
	}
	else
	{
		if (a==b || b==c || c==a)
		{
			cout<<"The triangle is Isosceles"<<endl;
		}
		else
		{
			cout<<"the triangle is Versatile"<<endl;
		}
	}
	
	return 0;

}
