#include <stdio.h>
int main(void)
{
	int num = 0;
	int i;
	scanf_s("%d", &num);
	for (i = num; i >= 1; i--)
	{
		printf("%d\n", i);
	}
	return 0;
}