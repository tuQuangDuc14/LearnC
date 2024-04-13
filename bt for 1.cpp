#include<stdio.h>
#include<conio.h>
main()
{
//	int i;.
int s=0;	
int n;
printf("nhap n=");
scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
  	s+=i;

  }
printf("tong la, %d",s);
return 1;
}
