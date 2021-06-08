# include <stdio.h>
int main (){
	int x;
	int one,two,five;
	scanf("%d",&x);
	for(one=1;one<x*10;one++){//小于全部是1毛钱的个数 
		
		for(two=1;two<x*10/2;two++){// 小于全部是二角钱的个数 
			for(five=1;five<x*10/5;five++){// 小于全部是 五毛钱的个数 
				if(one+two*2+five*5==x*10){
					printf("可以用%d个1角加%d个贰角加%d个五角得到%d元\n",one,two,five,x);
					goto out; 
				}
			}
		}
	}
	out:
	return 0; 
	
}
