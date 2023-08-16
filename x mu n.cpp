#include <stdio.h>
#include <conio.h>

double power_n(double x, long n)
{
	double result = 1;
	while(n--)
	{
		result = result * x;
	}
	return result;
}
double qpower_n(double x, long n)
{
	double result =1;
	while(n)
	{
		if(n % 2 ==1)
		{
			result = result * x;
		}
		x = x*x;
		n = n/2;
	}
	return result;
}
int main()
{
	double x =3;
	long n = 3;
	double z;
	z=qpower_n(x,n);
	printf("z=%f", z);
	
	getch();
	return 0;
}
