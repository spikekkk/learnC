#include <stdio.h>

int main(){
	
	int x;
	double sum=0;
	int cut=0;
	int number[2];
	scanf("%d",&x);
	while(x!=-1){
		number[cut]=x;
		sum+=x;
		cut++;
		scanf("%d",&x);
	}
	
	if(cut>0){
		int i;
		double average=sum/cut;
		for(i=0;i<cut;i++){
			if(number[i]>average){
				printf("%d",number[i]);
			}
		} 
	
	}
	return 0;
} 
