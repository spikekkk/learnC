#include <stdio.h>

int main(){
	
	int a[]={1,2,3,4,5,6,7,8,9,10,0};
	
	int len=sizeof(a)/sizeof(a[0]);
	
    int i;
    int j;
    int maxid;
    int temp;
    for(i=0;i<len;i++){
    	//1 ���ѭ����ʼ 
		//2 ���� i==maxid   ��0��ʼ 
		//3 ���ѭ���� 1��ʼ  
		//4 ���  1 �� 0 ��  maxid = 1 
		//�Դ�ѭ������arrʣ��Ԫ��---֪���ҵ� ȫ��Ԫ�� 
    	maxid=i;
    	for(j=i+1;j<len;j++){ // �Ƚ�����Ԫ�� 
    	if(a[j]>a[maxid]){  // j���� �ٶ����������

    		maxid=j;    // ��������滻��j,����������� 
		}	
		}
		temp=a[maxid];   //  ����ʱ ���� i������  
		a[maxid]=a[i];
		a[i]=temp;
	}
	int k;
	for(k=0;k<len;k++){
		printf("%d\n",a[k]);
	} 
    
    
	return 0;
} 
