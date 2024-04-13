#include<stdio.h>
#include<conio.h>
main()
{
int n,i;
int s=0;
printf("nhap n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)	
   {
   	if(i%2==1)
   	{
   	s=s+i;	
   	}
   }
}
printf("tong cac uoc le: %d",s);
return 1;

}
