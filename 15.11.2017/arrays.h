#pragma once

void addingFullingArray(int n, int *arr);
void sortingRE(int n, int *arr);
void showingArray(int n, int *arr);


void showingArray(int n, int *arr)
{
	for (int i = 0; i < n; ++i) cout << arr[i] << " ";
}

void addingFullingArray(int n, int *arr)
{
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter " << i + 1 << " element:" << endl;
		cin >> arr[i];
	}
}
void sortingRE(int n, int *arr)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = n - 1; j > i; --j)
		{
			if (arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
	}
}
