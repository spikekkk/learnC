//#include <stdio.h>
//int main(){
//	
//	int x=6;
//	int i;
//	int isPrime=1;
//	for(i=2;i<x;i++){
//		if(x%i==0){
//			isPrime=0;
//			break;
//		}
//	};
//	
//	if(isPrime==1){
//		printf("是素数");
//	}else {
//		printf("NOT");
//	} 
//	return 0;
//	
//} 

#include <stdio.h>
int main(){
	
	int x=6;
	int i;
	int isPrime=1;
	for(i=2;i<x;i++){
		if(x%i==0){
			isPrime=0;
			continue; // 一但条件满足即刻中断循环
		}
printf("打印不是除数的 数 %d\n",i);
	};
	
	if(isPrime==1){
		printf("是素数");
	}else {
		printf("NOT");
	} 
	return 0;
	
}

