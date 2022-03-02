#include<stdio.h>
int main(void)
{
	int num[9];
	int i;
	int a = 0;
	int c;
    int max=-1000000;
	for (i = 0; i < 9; i++)
	{
		scanf_s("%d", &a);
		num[i] = a;
		
        if (max < num[i])
        {
            max = num[i];
		c = i+1;
        }
	}
	printf("%d\n%d",max,c);
	return 0;
}
