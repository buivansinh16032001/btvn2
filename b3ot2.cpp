#include<stdio.h>
#include<math.h>
int main(){
	int tong=0;
	for(int i=1;i<=100;i++){
		if(i%2==0){
			tong+=i;
	}
	}
	printf("tong 100 so le dau tien la",+tong);
	
	return 0;
}
