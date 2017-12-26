#include<iostream>
#include<ctime>
#include"Arrays.h"

#define N 200

using namespace std;

int main()
{
	int length = lengthOfArray();
	int arr[N];

	generateRandomArray(arr, length);
	displayArray(arr, length);
	cout << endl;

	function1(arr, length);
	cout << endl;

	function2(arr, length);
	cout << endl;

	cout << "The result of the 3d funct:" << endl;
	function3(arr, length);
	displayArray(arr, length);
	cout << endl;

	cout << "the result of the 4th funct" << endl;
	function4(arr, length);
	displayArray(arr, length);
	cout << endl;

	system("pause");
	return 0;
}

