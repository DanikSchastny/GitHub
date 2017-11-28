using namespace std;
#pragma once

int addingInt();
void swap(int *a, int *b);

void swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
int addingInt()

{
	int n;
	while (true)
	{
		std::cout << "Enter natural N, N> 0" << endl;
		cin >> n;
		if (n > 0) return n;
	}
}
