#pragma once

#define N 200

using namespace std; 

void generateRandomArray(int *arr, int length);

int lengthOfArray();

void displayArray(int *arr, int length);

void function1(int *arr, int length);

bool SearchingForZero(int *arr, int length);

int SearchingForFirstZero(int *arr, int length);

int SearchingForLastZero(int *arr, int length);

void function2(int *arr, int length);

int countingFunct2(int *arr, int start, int finish);

void function3(int *arr, int &length);

void MovingToBack(int *arr, int length, int position);

void function4(int *arr, int length);


void generateRandomArray(int *arr, int length)
{
	srand(time(NULL));
	for (int i = 0; i < length; ++i)
	{
		arr[i] = rand() % 41 - 20;
	}
}

int lengthOfArray()
{
	int length;

	while (true)
	{
		cout << "Enter the length of array, Length <" << N / 2 << " !" << endl;
		cin >> length;

		if (length > 0 && length < N / 2)
		{
			return length;
		}
	}
}

void displayArray(int *arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << " ";
	}
}

void function1(int *arr, int length)
{
	if (SearchingForZero(arr, length))
	{
		if (SearchingForFirstZero(arr, length) == SearchingForLastZero(arr, length))
		{
			cout << "there is only 1 zero in array on position : " << SearchingForLastZero(arr, length) << endl;
		}
		else
		{
			cout << "The position of the first zero: " << SearchingForFirstZero(arr, length) << endl;
			cout << "The position of the last zero: " << SearchingForLastZero(arr, length) << endl;
		}
	}
	else
	{
		cout << "There are no elements, which are zero!" << endl;
	}
}

bool SearchingForZero(int *arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		if (arr[i] == 0)
			return true;
	}

	return false;
}

int SearchingForFirstZero(int *arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		if (arr[i] == 0)
			return i;
	}
}

int SearchingForLastZero(int *arr, int length)
{
	int q = 0;
	for (int i = 0; i < length; ++i)
	{
		if (arr[i] == 0)
			q = i;
	}

	return q;
}

void function2(int *arr, int length)
{
	if (SearchingForZero(arr, length))
	{
		if (SearchingForLastZero(arr, length) != SearchingForFirstZero(arr, length))
		{

			cout << "The product: " << countingFunct2(arr, SearchingForFirstZero(arr, length), SearchingForLastZero(arr, length));
		}

		else cout << "The first and the last positions are equal! That's why product doesn't exist!" << endl;
	}
	else
	{
		cout << "there are no zeroes in your array, that's why the second function doesn't work!" << endl;
	}
}

int countingFunct2(int *arr, int start, int finish)
{
	int result = 1;
	int k = 0;
	for (int i = start + 1; i < finish; ++i)
	{
		if (arr[i] % 2 == 0 && arr[i] < 0 && i % 2 == 1)
		{
			result *= arr[i];
			++k;
		}
	}

	if (k) return result;
	else return 0;
}

void function3(int *arr, int &length)
{
	for (int j = 0; j < length; ++j)
	{
		for (int i = 0; i < length; ++i)
		{
			if (arr[i] > 0)
			{
				MovingToBack(arr, length, i);
				--length;
			}
		}
	}
}

void MovingToBack(int *arr, int length, int position)
{
	for (int i = position; i < length - 1; ++i)
	{
		swap(arr[i], arr[i + 1]);
	}
}

void function4(int *arr, int length)
{
	int q = length;
	for (int j = 0; j < q; ++j)
	{
		for (int i = 0; i < q; ++i)
		{
			if (arr[i] == 0)
			{
				MovingToBack(arr, length, i);
				--q;
			}
		}
	}
}
