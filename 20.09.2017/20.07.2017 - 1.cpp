#include<iostream>
using namespace std;
 int main()
  
  {
  	char repeat = 'Y';
  	 while (repeat == 'Y')
  	  {
  	  	int mark;
  	  	cout <<"Enter your mark: \n";
  	  	cin >> mark;
  	  	if (mark> 0 && mark<11)
  	  	 {
  	  	 switch (mark)
  	  	  {
  	  	 	case 10 : cout<<"excellent \n"; break;
  	  	 	case 9 : cout<<"excellent \n"; break;
  	  	 	case 8 : cout<<"good \n"; break;
  	  	 	case 7 : cout<<"good \n"; break;
  	  	 	case 6 : cout<<"satisfactorily"; break;
  	  	 	case 5 : cout<<"satisfactorily \n"; break;
  	  	 	case 4 : cout<<"not satisfactorily \n"; break;
  	  	 	case 3 : cout<<"not satisfactorily \n"; break;
  	  	 	case 2 : cout<<"was absent \n"; break;
  	  	 	case 1 : cout<<"was absent \n"; break;
  	  	 	
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
