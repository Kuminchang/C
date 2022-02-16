#include<stdio.h>
int main(void)
{
	int h = 0;
	int m = 0;
	int a, b;

	scanf_s("%d %d", &h, &m);
	scanf_s("%d", &a);

	if (m + a >= 60)
	{
		b = m + a;
		h = b / 60 + h;
		m=
	}

	return 0;
}