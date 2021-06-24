#include <stdio.h>

int max(int a[],int len){

	int i;
	int maxid=0;
	for (i=2;i<len;i++){
		if(a[maxid]<a[i]){
			maxid=i;
		}
	}
	return maxid;
}

int main(){
	
	int a[]={1,23,43,54,65,65,6,76,7,564,436};
	
	int len=sizeof(a)/sizeof(a[0]);
	int i=len-1;
	for(i;i>0;i--){
		int maxid=max(a,i+1);
		int t=a[maxid]; // 把当前最大的value存起来 
		a[maxid]=a[i];  //  
		a[i]=t;
	}
	int keys;
for(keys=0;keys<len;keys++){
	printf("%d\n",a[i]);
}
	return 0;
}
