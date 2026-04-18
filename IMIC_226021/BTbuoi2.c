#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void bai1()
{
	int MSSV = 0;
	printf("Nhap MSSV: ");
	scanf("%d", &MSSV);	//Nhap ma so sinh vien dang so nguyen
	float GPA = 0;
	printf("Nhap GPA: ");
	scanf("%f", &GPA);	//Nhap diem trung binh dang so thuc
	printf("MSSV: %d\n", MSSV);
	printf("GPA: %f\n", GPA);
}
void bai2()
{
	int a = 0; //bien cuc bo (local variable) - can khoi tao gia tri ban dau
	int b = 0; 
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	int Tong = 0;
	int Hieu = 0;
	int Tich = 0;
	float Thuong = 0;
	Tong = a + b;
	Hieu = a - b;
	Tich = a * b;
	Thuong = a / (float)b;
	printf("Tong = %d\n", Tong);
	printf("Hieu = %d\n", Hieu);
	printf("Tich = %d\n", Tich);
	printf("Thuong = %f\n", Thuong);
}
void bai3()
{
	float r = 0;
	float pi = 3.14;
	printf("Nhap ban kinh r = ");
	scanf("%f", &r);
	float cv = 0;
	cv = 2 * pi * r;
	printf("Chu vi hinh tron cv = %f\n", cv);
	float dt = 0;
	dt = pi * r * r;
	printf("Dien tich hinh tron dt = %f\n", dt);
}
void bai4()
{
	char c=0;
	printf("Nhap 1 ky tu tu ban phim:");
	scanf(" %c", &c);
	printf("thap phan: %d\n", c);
	printf("thap luc phan: %x", c);
}