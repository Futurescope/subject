double mypow(double a, int n)
{
	double ans = a;
	if (a < 0 && n < 0)
		return 0;
	if (n == 0)
		return 1;
	if (n == 1)
		return a;
	for (; n > 1; --n)
	{
		ans *= a;
	}
	return ans;
}

int nx(int a)
{
	if (a == 1)
		return 1;
	int i = a;
	for (; a > 0; --a)
		i *= a;
	return i;
}

double sin_value(int x)
{
	int flag = 1;
	int n = 1;
	double node = 0.0;
	double add = 0.0;
	while (1)
	{
		node = mypow(x, 2*n + 1)/nx(2*n+1);
		if (node < 10e-5)
			break;
		else
		{
			if (n % 2 != 0)
				flag = -1;
			add += flag * node;
			flag = 1;
			++n;
		}
	}
	return add;

}