#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a = 0, i;
	int max = -1000000;
	int min = 1000000;

	scanf_s("%d", &a);
	int* arr = (int*)malloc(sizeof(int) * a);
	for (i = 0; i < a; i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d %d", min, max);
	free(arr);
	return 0;
}
