#include<iostream>
#include<ctime>
#include"Matrix.h"

using namespace std;

int main()
{
	int column, row;
	creatingMatrix(column, row);
	
	int matrix[N][N];
	matrixRandomEnterence(matrix, row, column);
	cout << endl;
	displayMatrix(matrix, row, column);

	cout << endl;
	cout << "The result of the 1st funct:" << endl;
	function1(matrix, row, column);
	cout << endl;

	displayMatrix(matrix, row, column);
	cout << endl;

	function2(matrix, row, column);
	cout << "The result of the 2nd funct:" << endl;
	displayMatrix(matrix, row, column);
	cout << endl;

	function3(matrix, row, column);
	cout << "The result of the 3rd funct:" << endl;
	displayMatrix(matrix, row, column);

	cout << endl;
	cout << "The result of the 4th funct:" << endl;
	function4(matrix, row, column);
	displayMatrix(matrix, row, column);


	system("pause");
	return 0;
}
