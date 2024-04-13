#include<stdio.h>
#include<conio.h>
main()
{
int n;
int i,a=0;
printf("nhap n=");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(n==i*i){
	a=1;
	break;
}
}
if(a==1)
printf("%d:la so chinh phuong",n);
else
printf("%d:khong la so chinh phuong",n);
return 1;
}

