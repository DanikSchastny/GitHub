#include<iostream>

int lengthStr(char *str);

int choosingBase();

void translating(char *numb, double number, int p);

void creatingWholePart(char *numb, double number, int p);

char translatingIntChar(int a);

void reverseArray(char *numb);

void creatingFractionalPart(char *numb, int p, int number, int position);

using namespace std;

int main()
{
	double number;

	cout << "Enter your number" << endl;
	cin >> number;

	int p = choosingBase();

	char numb[256];

	translating(numb, number, p);
	
	cout<<numb<<endl;

	system("pause");
	return 0;
}



int lengthStr(char *str)
{
	int i = 0;
	while (str[i])
	{
		++i;
	}
	return i;
}

int choosingBase()
{
	int p;
	while (true)
	{
		cout << "Choose the base of your counting system. 2<=p <= 16:" << endl;
		cin >> p;

		if (p >= 2 && p <= 16)
			return p;
	}
}

void translating(char *numb, double number, int p)
{
	creatingWholePart(numb, number, p);
	numb[lengthStr(numb)] = '.';
	creatingFractionalPart(numb, p, number, lengthStr(numb) + 1);
}

char translatingIntChar(int a)
{
	switch (a)
	{
	case 0 :
		return '0';
		break;
	case 1:
		return '1';
		break;
	case 2:
		return '2';
		break;
	case 3:
		return '3';
		break;
	case 4:
		return '4';
		break;
	case 5:
		return '5';
		break;
	case 6:
		return '6';
		break;
	case 7:
		return '7';
		break;
	case 8:
		return '8';
		break;
	case 9:
		return '9';
		break;
	case 10:
		return 'A';
		break;
	case 11:
		return 'B';
		break;
	case 12:
		return 'C';
		break;
	case 13:
		return 'D';
		break;
	case 14:
		return 'E';
		break;
	case 15:
		return 'F';
	}
}

void creatingWholePart(char *numb, double number, int p)
{
	int j = (int)number;
	int i = 0;

	while (j)
	{
		numb[i] = translatingIntChar(j%p);
		j /= p;
		++i;
	}
	reverseArray(numb);

}

void reverseArray(char *numb)
{
	int length = lengthStr(numb);

	for (int i = 0; i < length; ++i)
	{
		for (int j = 0; j < length - i; ++j)
		{
			swap(numb[j], numb[j + 1]);
		}
	}
}

void creatingFractionalPart(char *numb, int p, int number, int position)
{

	double fractPart = number - int(number);
	for (int i = position + 1; i < position + 5; ++i)
	{
		fractPart *= p;
		numb[i] = translatingIntChar((int)fractPart);
	}
}




















