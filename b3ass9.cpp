#include<stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int x1=0,x2=1,x3=1;
	for(int i=2;i<n;i++)
	{
		x1=x2;
		x2=x3;
		x3=x1+x2;
	}
	printf("so Fibo thu n:  %d\n",x3);
	
	
	
	return 0;
}


