#include<iostream>
#include"Matrix.h"

using namespace std;

void sideEnterence(int &row, int &column);

int main()
{
	int row, column, matrix[N][N];
	sideEnterence(row,column);
		
	matrixRandomEnterence(matrix, row, column);
	displayMatrix(matrix, row, column);
	cout << endl;

	reshuffleSquares(matrix, row, column);
	displayMatrix(matrix, row, column);
	cout << endl;
	system("pause");
	return 0;
}

void sideEnterence(int &row, int &column)
{
	int c;

	while (true)
	{
		cout << "Enter the side of matrix:" << endl;
		cin >> c;

		if (c > 0 && c < N && c % 2 == 0)
		{
			row = column = c;
			break;
		}
	}
}