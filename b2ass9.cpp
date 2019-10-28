#include<stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
	printf("nhap phan tu ary[%d]=",i);
	scanf("%d",&ary[i]);
	}
	
	
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0){
			printf("so le trong mang o vi tri la: %d\n",i);
		}
		
		
			}
				
			
	
	
	return 0;
}
