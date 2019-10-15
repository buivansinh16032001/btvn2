#include<stdio.h>
int main(){
	int n;
	printf("nhap n=\n");
	float S=0;
	scanf("%d",&n);

	
	for(int i= 1;i<=n;++i)
	{
	S+=(float)1/i;
}
      printf("%f",S);
	
		
	
	
	return 0;
}
