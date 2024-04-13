#include<stdio.h>
#include<conio.h>
main()
{
int i;
float s=0;
int n;
printf("nhap n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
 s=s+(1/n*(n+1));
 }	
  printf("tong la %f",s);	
	
}
