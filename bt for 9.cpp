#include<stdio.h>
#include<conio.h>
main()
{
int n;
int i;
printf("nhap n=");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
if(n%i==0)
printf("%d:uoc so cua cac so nguyen duong\n" ,i);

	
}
return 1;
}
