#include<stdio.h>
int isNT(int n);
int main()
{
int n,c;
printf("nhap n=");
scanf("%d",&n);	
c= isNT( n);
if(c==100)
{
	
printf(" khong la so nguyen to");
}
else
{
printf(" la so nguyen to");
}
}
int isNT(int n)
{
for(int i=2;i<=n-1;i++)
{
if(n%i==0)
return 100;
}	
return 200;	
	
}
