#include <stdio.h>

int main(){
	int three;
	scanf("%d",&three);
	
	int first=three/100;
	int second=three/10%10;
	int third=three%10;
	
	printf("%d",third*100+second*10+first);
	return 0;
}
