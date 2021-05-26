#include <stdio.h>
//int main(){
//int x;
//scanf("%d",&x);
//double t=(x-100)*0.9*2;
//printf("%f",t);
//return 0;
//}

// int main (){
//     int a,b,c,d;
//     scanf("%d%d%d%d",&a,&b,&c,&d);
//     int sums=a+b+c+d;
//     double averages=sums/4;
//     printf("Sum = %d; Average = %.1lf",sums,averages);
//     return 0;
//     
//     
// }

int main(){
   int ele;
   scanf("%d",&ele); 
    if(ele<=0){
        printf("Invalid Value!");
    }else{
        
   
    double cost;
    if(ele<=50){
        cost = ele*0.53;
    };
    if(ele>50){
        cost =50*0.53+(ele-50)*0.58;
    };
    printf("cost = %.2lf",cost); }
    return 0;
    
}
