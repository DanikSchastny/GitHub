#pragma once

#pragma once

#define N 100

using namespace std;

void createSquareMatrix(int &column, int &row);

void matrixRandomEnterence(int matrix[][N], int row, int column);

void displayMatrix(int matrix[][N], int row, int column);

void creatingMatrix(int &column, int & row);

void function1(int matrix[][N], int row, int column);

void swap(int &a, int &b);

void function2(int matrix[][N], int row, int column);

void function3(int matrix[][N], int row, int column);

int addingSide(int row);

void function4(int matrix[][N], int row, int column);

int coloumnSum(int matrix[][N], int row, int column, int number);

void columnSwap(int matrix[][N], int row, int column, int posA, int posB);

void waningRowsChanging(int matrix[][N], int row, int column);

void rowSwap(int matrix[][N], int row, int column, int posA, int posB);

int rowSum(int matrix[][N], int row, int column, int position);


void matrixRandomEnterence(int matrix[][N], int row, int column)
{

	for (int i = 0; i < column; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			matrix[i][j] = rand() % 10;
		}
	}
}

void displayMatrix(int matrix[][N], int row, int column)
{
	for (int i = 0; i < column; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			cout << matrix[i][j] << ' ';
		}
		cout << endl;
	}
}

void creatingMatrix(int &column, int &row)
{
	int c, r;

	while (true)
	{
		cout << "Enter the number of columns of your matrix:" << endl;
		cin >> c;

		if (c < N && c > 0)
		{
			column = c;
			break;
		}
	}

	while (true)
	{
		cout << "Enter the number of rows of your matrix:" << endl;
		cin >> r;

		if (r < N && r < c && r > 0)
		{
			row = r;
			break;
		}
	}
}

void function1(int matrix[][N], int row, int column)
{
	int j = 0;
	for (int i = 0; i <= row + 1; ++i)
	{
		j = i + 1;
		while (j)
		{

			for (int l = column - 1; l>0; --l)
			{

				if (matrix[l][i] <= matrix[l - 1][i])
				{

					swap(matrix[l - 1][i], matrix[l][i]);
				}
			}
			--j;
		}

	}
}

void swap(int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

void function2(int matrix[][N], int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = i + 1; j < column; ++j)
		{
			for (int l = column - 1; l >1 + i; --l)
			{
				if (matrix[l][i] >= matrix[l - 1][i])
				{
					swap(matrix[l][i], matrix[l - 1][i]);
				}
			}
		}
	}
}

void function3(int matrix[][N], int row, int column)
{
	int side = addingSide(row);
	for (int i = 0, m = column - 1; i <= side; ++i, --m)
	{
		for (int j = row - 1, l = 0; j >= i; --j, ++l)
		{
			matrix[m][l] = matrix[i][j];
		}
		cout << endl;
	}
}

int addingSide(int row)
{
	int side;
	while (true)
	{
		cout << "Enter the side of triangle, that you want to copy:" << endl;
		cin >> side;

		if (side < row && side > 0)
		{
			return side;
		}
	}
}

void function4(int matrix[][N], int row, int column)
{
	for (int j = 0; j < row + 1; ++j)
	{
		for (int i = row - 1; i > j; --i)
		{
			if (coloumnSum(matrix, row, column, i) > coloumnSum(matrix, row, column, i - 1))
			{
				columnSwap(matrix, row, column, i, i - 1);
			}
		}
	}
}

int coloumnSum(int matrix[][N], int row, int column, int number)
{
	int sum = 0;
	for (int i = 0; i < column; ++i)
	{
		sum += matrix[i][number];
	}

	return sum;
}

void columnSwap(int matrix[][N], int row, int column, int posA, int posB)
{
	for (int i = 0; i < column; ++i)
	{
		swap(matrix[i][posA], matrix[i][posB]);
	}
}

void createSquareMatrix(int &column, int &row)
{
	int a;

	while(true)
	{
		cout << "Enter the side of matrix:" << endl;
		cin >> a;

		if (a > 0 && a < N)
		{
			column = row = a;
			break;
		}
	}
}

int rowSum(int matrix[][N], int row, int column, int position)
{
	int sum = 0;
	for (int i = 0; i < row; ++i)
	{
		sum += matrix[position][i];
	}

	return sum;
}

void rowSwap(int matrix[][N], int row, int column, int posA, int posB)
{
	for (int i = 0; i < row; ++i)
	{
		swap(matrix[posA][i], matrix[posB][i]);
    }
}


void waningRowsChanging(int matrix[][N], int row, int column)
{
	for (int j = 0; j < column; ++j)
	{
		for (int i = 1+j; i < column; ++i)
		{
			if (rowSum(matrix, row, column, i) > rowSum(matrix, row, column, i - 1))
			{
				rowSwap(matrix, row, column, i, i - 1);
			}
		}
	}
}
