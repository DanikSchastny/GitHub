// В данной программе выполняются задания всех 3 домашних задач, в зависимости от условия, вводимого
// с клавиатуры

//////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
char EnteringSymbol(int q);
int ChoosingNumberSystem();
void ShowingResult(char x, int sum, int n);
int CountingSymbol(int n,int x,int f);
int Translation(char x);

int main(int argc, char *argv[])
{
	while(true)
	{
	int N, q = ChoosingNumberSystem(), f = 0;;
	cout << "Enter N"<<endl;
	cin >> N;
	char x = EnteringSymbol(q);
	int numb = Translation(x);
	int numb1=CountingSymbol(N, numb, q);
	ShowingResult(x, numb1, N);
	cout<<"If you don't want to repeat, enter No"<<endl;
	char answ;
	cin >>answ;
	if(answ == 'No') break;
    }
    return 0;
	}

void ShowingResult(char x, int sum, int n)
{
	cout << "The required symbol " << x << "occurs " << sum << " times in number " << n<<endl;
}
	


int Translation(char x)
{
	int a;
	switch (x)
	{
	case '0': a = 0;
		break;
	case '1': a = 1;
		break;
	case '2': a = 2;
		break;
	case '3': a = 3;
		break;
	case '4': a = 4;
		break;
	case '5': a = 5;
		break;
	case '6': a = 6;
		break;
	case '7': a = 7;
		break;
	case '8': a = 8;
		break;
	case '9': a = 9;
		break;
	case 'A': a = 10;
		break;
	case 'B': a = 11;
		break;
	case 'C': a = 12;
		break;
	case 'D': a = 13;
		break;
	case 'E': a = 14;
		break;
	case 'F': a = 15;
		break;
	}
	return a;
	}

char EnteringSymbol(int q)
{
	char x;
	while (true)
	{
		cout << "Enter the right symbol:" << endl;
			cin >> x;
			if (q == 2)
			{
				if (x == '0' || x == '1') return x;
			}
			else if (x == '1' || x == '2' || x == '3' || x == '4' || x == '5' || x == '6' || x == '7' || x == '8' ||
				x == '9' || x == '0' || x == 'A' || x == 'B' || x == 'C' || x == 'D' || x == 'E' || x == 'F') return x;
		
	}
}

int CountingSymbol(int n,int x,int f)
{
	int numb = n, sum = 0;
	int symb = x;

	
	while (numb > 0)
	{
		if (numb % f == symb) sum += 1;
		numb /= f;
	}
	return sum;
}

int ChoosingNumberSystem()
{
	int f = 0;
	while (true)
	{
		cout << "Choose the base of the number system (2 or 16):" << endl;
		cin >> f;
		if (f == 2 || f == 16) return f;
		else cout << "Your base doesn't fit us. Try again." << endl;
	}
}

