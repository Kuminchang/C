#include <stdio.h>
int main(void)
{
	int num;
	int i;
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++)
	{
		printf("%d\n", i);
	}
	return 0;
}