#include<stdio.h>
#include<conio.h>
main()
{
int n;
int s=0;
int i;
printf("nhap n=");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
if(n%i==0)
{ 
s=s+i;

} 

}  
//break;
printf("tong la %d",s);	
}
