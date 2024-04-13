#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int a,b,c;
float x,x1,x2,denta;
printf("nhap a=");
scanf("%d",&a);
printf("nhap b=");
scanf("%d",&b);
printf("nhap c=");
scanf("%d",&c);
if(a==0)
{
	if(b==0)
	{
		if(c==0)
		{
		printf("phuong trinh vo so nghiem");
		}
		else
		{
			printf("phuong trinh vo nghiem");
		}
	}
	else
	{
	x=-c/(float(a));
	printf("phuong trinh co mot nghiem duy nhat,%f",x);
	}
}	
else
{
denta=(b*b)-(4*a*c);
  	if(denta>0)
  	{
  	x1=(-b+sqrt(denta))/(float(2*a));
  	x2=(-b-sqrt(denta))/(float(2*a));
  	printf("phuong trinh co hai nghiem phan biet,x1=0.2%f,x2=0.2%f",x1,x2);
  	
	}
     	
	if(denta==0)
	{
	x=-b/(float(2*a));
	printf("phuong trinh co nghiem kep,%f",x);
	}	 
	
	if(denta<0)
	{
		printf("phuong trinh vo nghiem");
	}
	
	
}	
	
	
}
