{
	double x,  E = Adding_E();
	cout << "Enter x" << endl;
	cin >> x;
	cout << "x=" << x << "  " << "f(x)=" << Counting(x, E) << "  " << "cos(x) =" << cos(x) << endl;
	system("pause");
	return 0;
}

double Adding_E()
{
	double E;
	while (true)
	{
		cout << "Enter E, E>0" << endl;
		cin >> E;
		if (E > 0) return E;
	}
}
double Counting(double x, double E)
{
	double term = 0;
	double sum = 0;
	for (int i = 0; true; ++i)
	{
		term = pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
		if (abs(term)>=E)sum += term;
		else return sum;
	}
}
int factorial(int i)
{
	if (i == 0 || i == 1) return 1;
	else return i*factorial(i - 1);
}
