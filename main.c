#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int x;
	int n=0;
	scanf("%d, &x");
	n++;
	x/=10;
	while(x>0){
		n++;
		x/=10;
	}
	printf("%d\n",n);
	return 0;
}
