#include<stdio.h>
#include<conio.h>
main()
{
int n,i;
int s=1;
printf("nhap n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
	s=s*i;
}	
}
printf("tich la:%d",s);
return 1;
}
