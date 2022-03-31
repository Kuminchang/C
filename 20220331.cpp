#include<stdio.h>
double PIE = 3.14;
int sum(int n,int m);
double circle(double x);
int main(void)
{
	int num1, num2, num;
	printf("정수입력\n");
	scanf_s("%d %d", &num1, &num2);
	num = sum(num1,num2);
	printf("합계는 %d입니다\n", num);

	double b;
	printf("반지름의 길이를 입력하세요\n");
	scanf_s("%lf", &b);
	double c = circle(b);
	printf("원의 넓이는 %f입니다.\n", c);


}
int sum(int n,int m)
{
	return n + m;
	
}
double circle(double x)
{
	return x*x*PIE;
}

