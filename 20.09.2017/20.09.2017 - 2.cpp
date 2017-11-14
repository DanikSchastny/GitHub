#include<iostream>
using namespace std;
 int main()
  
  {
  	char repeat = 'Y';
  	 while (repeat == 'Y')
  	  {
  	  	int number;
  	  	cout <<"Enter the number of mounth: \n";
  	  	cin >> number;
  	  	if (number> 0 && number<13)
  	  	 {
  	  	 switch (number)
  	  	  {
  	  	  	case 12 : cout<<"winter \n"; break;
  	  	 	case 11 : cout<<"autumn \n"; break;
  	  	 	case 10 : cout<<"autumn \n"; break;
  	  	 	case 9 : cout<<"autumn \n"; break;
  	  	 	case 8 : cout<<"summer \n"; break;
  	  	 	case 7 : cout<<"summer \n"; break;
  	  	 	case 6 : cout<<"summer \n"; break;
  	  	 	case 5 : cout<<"spring \n"; break;
  	  	 	case 4 : cout<<"spring \n"; break;
  	  	 	case 3 : cout<<"spring \n"; break;
  	  	 	case 2 : cout<<"winter \n"; break;
  	  	 	case 1 : cout<<"winter \n"; break;
  	  	 	
  	      }
  	     }
  	      else
         {
         	cout <<"Enter the right mark \n";
         }
        cout<<"Repeat? Y/N \n";
        cin >>repeat;
		}
      return 0;  
  }
