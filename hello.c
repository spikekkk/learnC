#include <stdio.h>

// int main(){
// 	
// 	printf("hello world\n");
// 	return 0;
// }
// 
// 

//int main(){
//	printf("23+43=%d\n",23+43);
//}

// %d说明后面有一个整数要输出在找个位置

 
 int main (){
 	int price=0;
 	printf("请输入金额元：");
 	scanf("%d",&price);
 	int change=100-price;
	printf("找您%d元\n",change); 
 }
