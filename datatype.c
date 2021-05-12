#include <stdio.h>

int main(){
	
	printf("请分别输入身高和英寸，","如输入\"5 7\"表示5英尺7英寸:");
	// 初始定义为浮点数。就不用转换/12.0 
	double foot;
	double inch;
	scanf("%lf %lf", &foot,&inch); // 对于浮点数 输入的时候类型为 lf  整数为d 
//	printf("身高是%f米。\n",((foot+inch/12)*0.3048)); // 只能输出整数类型，若想输出浮点数需要改为如下 
// 当浮点数和整数放在一起运算时候，C会将整数转换成浮点数。然后进行浮点数的运算 
printf("身高是%f米。\n",((foot+inch/12)*0.3048));
	return 0; 
	
} 

//int main(){
//	printf("%d \n",14/3.0); //答案为3 
//	return 0;
//}
