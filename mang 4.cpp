#include<stdio.h>
int max(int a,int b);
int main ()
{
int a,b,c;
printf("nhap a=");
scanf("%d",&a);
printf("nhap b=");
scanf("%d",&b);	
printf("max la:%d",max(a,b));
}
int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}
