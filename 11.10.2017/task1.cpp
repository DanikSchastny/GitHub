#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	long long N;
	cout << "Enter your Number:" << endl;
	cin >> N;
	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0, x = 0, a0 = 0;
	
	if (N == 0) cout << "Your Number = 0, and consists of 1x0" << endl;
	else
	{
		while (N > 0)
		{
			x = N % 10;
			switch (x)
			{
			case 0: ++a0;
				break;
			case 1: ++a1;
				break;
			case 2: ++a2;
				break;
			case 3: ++a3;
				break;
			case 4: ++a4;
				break;
			case 5: ++a5;
				break;
			case 6: ++a6;
				break;
			case 7: ++a7;
				break;
			case 8: ++a8;
				break;
			case 9: ++a9;
				break;
			}
			N /= 10;
		}
	}

	cout << "Your number consists of:" << endl;
	if (a0 != 0) cout << a0 << "x" << "0" << endl;
	if (a1 != 0) cout << a1 << "x" << "1"<<endl;
	if (a2 != 0) cout << a2 << "x" << "2" << endl;
	if (a3 != 0) cout << a3 << "x" << "3" << endl;
	if (a4 != 0) cout << a4 << "x" << "4" << endl;
	if (a5 != 0) cout << a5 << "x" << "5" << endl;
	if (a6 != 0) cout << a6 << "x" << "6" << endl;
	if (a7 != 0) cout << a7 << "x" << "7" << endl;
	if (a8 != 0) cout << a8 << "x" << "8" << endl;
	if (a9 != 0) cout << a9 << "x" << "9" << endl;

	if (a9 != 0) cout << "9 is the biggest numeral" << endl;
	else
	{
		if (a8 != 0)  cout << "8 is the biggest numeral" << endl;
		else
		{
			if (a7 != 0)  cout << "7 is the biggest numeral" << endl;
			else
			{
				if (a6 != 0)  cout << "6 is the biggest numeral" << endl;
				else
				{
					if (a5 != 0)  cout << "5 is the biggest numeral" << endl;
					else
					{
						if (a4 != 0)  cout << "4 is the biggest numeral" << endl;
						else
						{
							if (a3 != 0)  cout << "3 is the biggest numeral" << endl;
							else
							{
								if (a2 != 0)  cout << "2 is the biggest numeral" << endl;
								else
								{
									if (a1 != 0)  cout << "1 is the biggest numeral" << endl;
									else
										cout << "0 is the biggest numeral" << endl;
								}
							}
						}
					}
				}
			}
		}
	}

	if (a0 != 0) cout << "0 is the smallest numeral" << endl;
	else
	{
		if (a1 != 0) cout << "1 is the smallest numeral" << endl;
		else
		{
			if (a2 != 0) cout << "2 is the smallest numeral" << endl;
			else
			{
				if (a3 != 0) cout << "3 is the smallest numeral" << endl;
				else
				{
					if (a4 != 0) cout << "4 is the smallest numeral" << endl;
					else
					{
						if (a5 != 0) cout << "5 is the smallest numeral" << endl;
						else
						{
							if (a6 != 0) cout << "6 is the smallest numeral" << endl;
							else
							{
								if (a7 != 0) cout << "7 is the smallest numeral" << endl;
								else
								{
									if (a8 != 0) cout << "8 is the smallest numeral" << endl;
									else
										cout << "9 is the smallest numeral" << endl;
								}
							}
						}
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}
