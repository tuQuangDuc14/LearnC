#include<stdio.h>
#include<conio.h>
main()
{
int n,i,a;
printf("nhap n=");
scanf("%d",&n);
for(i=2;i<=n-1;i++)
{
if(n%i==0)
{
a=1;
break;
}
}
if(a==1)
printf("%d:khong phai so nguyen to",n);
else
printf("%d:la so nguyen to",n);
return 1;
}


