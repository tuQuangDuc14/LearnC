#include<stdio.h>
#include<conio.h>
main()
{
int n,i,x=0;

printf("nhap n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
x=x+1;

}
printf("dem duoc:%x",x);
return 1;
}
