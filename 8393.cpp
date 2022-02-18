#include<stdio.h>
int main(void)
{
	int num;
	int i;
	int a = 0;
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		a += i;
	}
	printf("%d", a);
	return 0;
}