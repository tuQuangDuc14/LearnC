#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
float x,y;
printf("nhap doanh thu=");
scanf("%f",x);
if(x<=100)
{
	y=0.05*(float(x));
	printf("hoa hong nhan duoc,%f",y);
	
}
else
if(x<=300&&x>100)
{
    y=0.2*(float(x));	
	printf("hoa hong nhan duoc,%f",y);

}
if(x>300)
    y=0.3*(float(x));
    printf("hoa hong nhan duoc,%f",y);




}
