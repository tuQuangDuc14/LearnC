#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int a,b,c;
float x;
float denta,x1,x2;

printf("Nhap a=");
scanf("%d",&a);
printf("Nhap b=");
scanf("%d",&b);
printf("Nhap c=");
scanf("%d",&c);

if(a==0)
{
        if(b==0)
        {
         	if(c==0)
			{
			        printf("phuong trinh vo so nghiem")	;
			}
			else
			{
				printf("phuong trinh vo nghiem");
			}  	
         	 	
     	}
     	else
     	{
     		x=-c/(float)b;
     	printf("phuong trình co nghiem duy nhat,%f", x);
     	}
}
else
{
    denta=b*b-4*a*c;

        if(denta>0)	
		{
			x1=(-b+sqrt(denta))/(2*(float)a);
		    x2=(-b-sqrt(denta))/(2*(float)a);
			printf("phuong trinh co hai nghiem phan biet,x1=%0.2f   x2=%0.2f",x1,x2);
        }
        if(denta==0)
        {
        	x1=-b/(float)(2*a);
        printf("phuong trinh co nghiem kep,%f",x1);	
        }
        if(denta<0)	
        printf("phuong trinh vo nghiem");
        
}
}


