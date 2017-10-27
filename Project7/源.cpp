#include<stdio.h>
int main()
{
	double a=3.3/3;
	double b=1.1;
	
	if (a-b<=1e-6||b-a<=1e-6)
	{
		printf("equal");
	}
	else {
		printf("unequal");
	}
}