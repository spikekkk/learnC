# include <stdio.h>
int main (){
	int x;
	int one,two,five;
	scanf("%d",&x);
	for(one=1;one<x*10;one++){//С��ȫ����1ëǮ�ĸ��� 
		
		for(two=1;two<x*10/2;two++){// С��ȫ���Ƕ���Ǯ�ĸ��� 
			for(five=1;five<x*10/5;five++){// С��ȫ���� ��ëǮ�ĸ��� 
				if(one+two*2+five*5==x*10){
					printf("������%d��1�Ǽ�%d�����Ǽ�%d����ǵõ�%dԪ\n",one,two,five,x);
					goto out; 
				}
			}
		}
	}
	out:
	return 0; 
	
}
