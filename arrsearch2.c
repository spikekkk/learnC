#include <stdio.h>

int search(int key,int a[],int len){
	int left=0;
	int right=len-1;

	int ret=-1;
	while(right>left){
		int mid =(left+right)/2;
		if(a[mid]==key){
			ret=mid;
			break;
		}else 	if(a[mid]>key){
			right=mid -1;
		}else {
			left=mid+1;
		}
	}
	return ret;
} 

int main(){
	int k=10;
	int a[]={1,2,3,4,5,6,7,8,9,10,11,89,};
	int r=search(k,a,sizeof(a)/sizeof(a[0]));
printf("%d\n",r);
return 0;
} 
