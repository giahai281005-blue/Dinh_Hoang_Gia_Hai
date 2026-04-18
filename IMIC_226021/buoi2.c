#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
void giai_phuong_trinh_bac_hai()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int delta = 0;

	float x, x1, x2;
	//yeu cau nhap uer nhap a,b,c
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	delta = b * b - (4 * a * c);
	if (a == 0)
	{
		x = (-c) / b;
		printf("Phuong trinh bac mot co 1 nghiem duy nhat: x = %f", x);
	}
	else
	{
		if (delta == 0)
		{
			x = (-b) / (2.0 * a);
			printf("Phuong trinh co 1 nghiem duy nhat: x = %f", x);
		}
		if (delta > 0)
		{
			x1 = ( - b + sqrt(delta)) / (2 * a);
			x2 = ( - b - sqrt(delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem phan biet x1 = %f, x2 = %f", x1, x2);
		}
		else
		{
			printf("Phuong trinh vo nghiem");
		}
	}

}