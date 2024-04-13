#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
int x,y,z;
printf("nhap x=");	
scanf("%d",&x);	
printf("nhap y=");	
scanf("%d",&y);	
printf("nhap z=");	
scanf("%d",&z);		
if(x>y&&x>z)
printf("so lon nhat %d",x);
else 
if(y>x&&y>z)
printf("so lon nhat %d",y);
if(z>x&&z>y)
printf("so lon nhat %d",z);
}
