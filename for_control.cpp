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
//		printf("������");
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
			continue; // һ���������㼴���ж�ѭ��
		}
printf("��ӡ���ǳ����� �� %d\n",i);
	};
	
	if(isPrime==1){
		printf("������");
	}else {
		printf("NOT");
	} 
	return 0;
	
}

