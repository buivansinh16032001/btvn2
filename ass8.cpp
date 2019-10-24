#include<stdio.h>
int main(){
	int ary[5]={12,5,2,19,35};
	int a=5,i;
	for(int i=0;i<5;i++){
		if(a==ary[i])
			break;
		
	}
	if(i<6){
		printf("so can tim %d o vi tri %d",a,i);
	}else{
		printf("ko tim thay so");
	}
	
	
	
	return 0;
}
