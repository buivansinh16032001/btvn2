#include<stdio.h>
int main(){
	int n,tong = 0,i;
	printf("nhap gia tri n:\n");
	scanf ("%d",&n);
	for (i=1;i<n;i++){
		if(n%i==0){
		
		tong=tong+i;
	}
	}
	if(tong==n){
	
	printf("%d la so hoan hao \n",n);
	
}else{

printf("%d ko phai la so hoan hao \n",n);
}
	  	
	return 0;
}
