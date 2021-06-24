#include <stdio.h>

int main(){
	
	int a[]={1,2,3,4,5,6,7,8,9,10,0};
	
	int len=sizeof(a)/sizeof(a[0]);
	
    int i;
    int j;
    int maxid;
    int temp;
    for(i=0;i<len;i++){
    	//1 外层循环开始 
		//2 假设 i==maxid   从0开始 
		//3 里层循环从 1开始  
		//4 如果  1 比 0 大  maxid = 1 
		//以此循环所有arr剩余元素---知道找到 全部元素 
    	maxid=i;
    	for(j=i+1;j<len;j++){ // 比较相邻元素 
    	if(a[j]>a[maxid]){  // j大于 假定的最大索引

    		maxid=j;    // 最大索引替换给j,保存最大索引 
		}	
		}
		temp=a[maxid];   //  将此时 最大的 i存下来  
		a[maxid]=a[i];
		a[i]=temp;
	}
	int k;
	for(k=0;k<len;k++){
		printf("%d\n",a[k]);
	} 
    
    
	return 0;
} 
