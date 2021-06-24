#include <stdio.h>

int search(int,int [],int);
	

int main(){
	
	int a[]={1,2,3,4,5,6,7,8,9};
 int r=search(1,a,sizeof(a)/sizeof(a[0]));
printf("%d\n",r);
	
	return 0;
} 

	int search(int key,int a[],int len){
		int ret=-1;
		int i;
		for(i=0;i<len;i++){
			if(key==a[i]){
				ret =i;
				break;
			}
		}
		return ret;
	};
