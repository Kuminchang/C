#include<stdio.h>
double PIE = 3.14;
int sum(int n,int m);
double circle(double x);
int main(void)
{
	int num1, num2, num;
	printf("�����Է�\n");
	scanf_s("%d %d", &num1, &num2);
	num = sum(num1,num2);
	printf("�հ�� %d�Դϴ�\n", num);

	double b;
	printf("�������� ���̸� �Է��ϼ���\n");
	scanf_s("%lf", &b);
	double c = circle(b);
	printf("���� ���̴� %f�Դϴ�.\n", c);


}
int sum(int n,int m)
{
	return n + m;
	
}
double circle(double x)
{
	return x*x*PIE;
}

