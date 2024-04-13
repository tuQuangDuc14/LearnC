#include<stdio.h>
#include<conio.h>
main()
{
 int n;
 long s=1;
 int x,i;
 printf("nhap n=");
 scanf("%d",&n);
 printf("nhap x");
 scanf("%d",&x);
 
 for(i=1;i<=n;i++)
 {
 	s=s*x;
 }
 printf("ket qua %d",s);
 	
 return 1;	
 	
 }	
