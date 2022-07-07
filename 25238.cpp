#include <stdio.h>
int main(void)
{
	double a, b;
	scanf_s("%lf %lf", &a, &b);
	if (a * (100 - b) / 100 >= 100)
		printf("0");
	else
		printf("1");

	return 0;
}