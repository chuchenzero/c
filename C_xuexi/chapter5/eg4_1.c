//辗转相除法求最大公约数
#include <stdio.h>
int main(){
    int a,b;
    int min,max;
    int ret;
    scanf("%d%d", &a, &b);
    if (a>b){
        min = b; 
        max = a; 
    }else{
        min = a;
        max = b;
    }
    while (min!=0){
        ret=max%min;
        max=min;
        min=ret;
        printf("max= %d\n",max);
        printf("min= %d\n",min);
        printf("ret= %d\n",ret);

    }
    printf("%d 是最大公约数",max);
    printf("max= %d\n",max);
    printf("hello?");
    return 0;
}