//枚举法求最大公约数
#include <stdio.h>
int main(){
    int a,b;
    int min;
    scanf("%d%d", &a, &b);
    // if (a>b){
    //     min = b; 
    // }else{
    //     min = a;
    // }
     printf("%d",b);
    int ret = 0;
    int i;
    for(i=1;i<a&&i<b;i++){
        if (a%i == 0){
            if (b%i == 0){
                ret = i;
            }
        }
    }
    printf("%d 是最大公约数",ret);
    printf("%d",a);
    printf("%d",b);
    printf("%d",i);
    printf("%d",ret);
    printf("%d",min);
}