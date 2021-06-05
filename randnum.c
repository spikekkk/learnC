#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(0));
	int a=rand()%100;
//	printf("%d\n",a%100); // 取余100;得到100以内的随机数
	int b=0;
	int count=0;
	printf("我已经想好了一个 1到100之间的数\n");
	do{
		printf("请猜这个1到100之间的数\n");
		scanf("%d",&b);
		count++;
		if(b>a){
			printf("你猜的数大了\n");
		}else if(a<b){
			printf("你猜的数小了\n"); 
		} 
	}while(a!=b);
	
	printf("你用了%d次猜到了答案\n",count) ;
	 
	 
	return 0;
}
