#include<math.h>
double formu(double a)
{
	return pow(a, 3) - pow(a, 2) - 1;
}
double root()
{
	double a, b, m;
	a = 0.0;
	b = 3.0;
	
	while (formu(a)*formu(b)<0)
	{
		m = (a + b) / 2.0;
		if ((m-a)<10e-4)
		{
			return m;
		}
		else
		{
			if (formu(a)*formu(m) < 0)
			{
				b = m;
			}
			else
			{
				a = m;
			}
		}
	}
	return (a + b) / 2.0;
}