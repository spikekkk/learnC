#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int a=rand()%100;
//	printf("%d\n",a%100); // ȡ��100;�õ�100���ڵ������
	int b=0;
	int count=0;
	printf("���Ѿ������һ�� 1��100֮�����\n");
	do{
		printf("������1��100֮�����\n");
		scanf("%d",&b);
		count++;
		if(b>a){
			printf("��µ�������\n");
		}else if(a<b){
			printf("��µ���С��\n"); 
		} 
	}while(a!=b);
	
	printf("������%d�βµ��˴�\n",count) ;
	 
	 
	return 0;
}
