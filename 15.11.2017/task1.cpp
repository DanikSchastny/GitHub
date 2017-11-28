#include<iostream>
#include "number.h"
#include "arrays.h"

using namespace std;

int main(int argc, char *argv[])
{
	int n = addingInt();
	const int N = 100;
	int arr[N];
	addingFullingArray(n, arr);
	sortingRE(n, arr);
	showingArray(n, arr);
	system("pause");
	return 0;

}