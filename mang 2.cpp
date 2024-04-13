 #include<stdio.h>
 int TinhTong(int a,int b);
  int main()
 {
 	int a,b,c;
 	printf("\nnhap a,b=");
 	scanf("%d%d",&a,&b);
	c=a+b;
	printf("tong la:%d",c); 
}

int TinhTong(int q,int b)
{
int s=q+b;
return s;
}
