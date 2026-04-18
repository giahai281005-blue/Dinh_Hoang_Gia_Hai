#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void tinhtoan()
{
	int a = 0;
	int b = 0;
	int tong = 0;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	tong = a + b;
	printf("tong = %d\n", tong);
}

void test()
{
	char c = 0;
	printf("Nhap 1 ky tu tu ban phim:");
	scanf(" %c", &c);
	printf("thap phan: %d\n", c);
	printf("thap luc phan: %x", c);
}