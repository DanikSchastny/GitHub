
#pragma once
using namespace std;

int addingInt();
void swap(int *a, int *b);
void equalResult(int a);

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
void equalResult(int a)
{
	if (a) cout << "They not are equal";

	else cout << "They are equal";
}
