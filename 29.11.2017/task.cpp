#include<iostream>
#include"Matrix.h"
#include<ctime>

using namespace std;

int main()
{
	int row,column;
	createSquareMatrix(column, row);

	int matrix[N][N];

	matrixRandomEnterence(matrix,row, column);
	displayMatrix(matrix, row, column);
	cout << endl;

	waningRowsChanging(matrix, row, column);

	cout << "The result:" << endl;
	cout << endl;

	displayMatrix(matrix, row, column);

	system("pause");
	return 0;
}