#include<stdio.h>
int soHH(int n);
int main()
{
int n,c;
printf("nhap n=");
scanf("%d",&n);
c=soHH(n);
if(n==c)
{
	printf("la so hoan hao");
}
else
{
	printf("khong la so hoan hao");
}
}
int soHH(int n)

{
	int s=0;
for(int i=1;i<n;i++)
{
	if(n%i==0)
	{
	 s=s+i;
		
	}
}
return s;

}
