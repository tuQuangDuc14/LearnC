#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
float x,y,z;	
printf("nhap tien luong =");	
scanf("%f",&x);	
if(x>15)
{
	y=0.3*(float(x));
	z= (float(x))-y;
	printf(" thue,%f",y);
	printf("luong nhan duoc sau thue,%f",z);
}
else 
if(x>=7&&x<=15)
{
	y=0.2*(float(x));
	z= (float(x))-y;
	printf(" thue,%f",y);
	printf("luong nhan duoc sau thue,%f",z);	
}
if(x<7)
{
    y=0.1*(float(x));
	z= (float(x))-y;
	printf(" thue,%f",y);
	printf("luong nhan duoc sau thue,%f",z);	
}
}
