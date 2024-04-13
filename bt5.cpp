#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
float a,b,c,diemtb;
printf("nhap diem bai kiem tra=");
scanf("%f",&a);
printf("nhap diem giua ki=");
scanf("%f",&b);	
printf("nhap diem cuoi ki=");
scanf("%f",&c);	
diemtb=(float(a)+b+c)/3;
if(diemtb>=9)
printf("hang A");
else
if(diemtb>=7&&diemtb<9)
printf("hang B");
if(diemtb>=5&&diemtb<7)
printf("hang C");
else
if(diemtb<5)
printf("hang F");
}
