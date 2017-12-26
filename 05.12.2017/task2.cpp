#include<iostream>
#include"Matrix.h"

using namespace std;

void sideEnterence(int &row, int &column);
void circleReshuffle(int matrix[][N], int side);
void OneAndFourSwap(int matrix[][N], int side);
void OneAndThreeSwap(int matrix[][N], int side);
void OneAndTwoSwap(int matrix[][N], int side);


int main()
{
	int row, column, matrix[N][N];
	sideEnterence(row,column);
		
	matrixRandomEnterence(matrix, row, column);
	displayMatrix(matrix, row, column);
	cout << endl;

	circleReshuffle(matrix, row);
	displayMatrix(matrix, row, column);


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

void circleReshuffle(int matrix[][N],  int side)
{
	OneAndFourSwap(matrix, side);
	OneAndThreeSwap(matrix, side);
	OneAndTwoSwap(matrix, side);
}

void OneAndFourSwap(int matrix[][N],  int side)
{
	for (int i = 0; i < side / 2; ++i)
	{
		for (int j = 0; j < side / 2; ++j)
		{
			swap(matrix[i][j], matrix[side / 2 + i][j]);
		}
	}
}

void OneAndThreeSwap(int matrix[][N], int side)
{
	for (int j = side / 2; j < side; ++j)
	{
		for (int i = 0; i < side / 2; ++i)
		{
			swap(matrix[j][i], matrix[j][side / 2 + i]);
		}
	}
}
void OneAndTwoSwap(int matrix[][N], int side)
{
	for (int i = 0; i < side/2; ++i)
	{
		for (int j = side / 2; j < side; ++j)
		{
			swap(matrix[i][j], matrix[side/2 + i][j]);
		}
	}
}