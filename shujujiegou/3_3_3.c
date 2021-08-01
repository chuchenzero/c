//用递归的方法求n的阶乘
#include <stdio.h>
int factor (int n) { 
    if (n == 0|| n == 1) 
        return 1;
    else
        // return n*=factor(n); 
        return n*factor (n-1);

}
int main(){
    int n = 0;
    scanf("%d\n",&n);
    // printf("%d\n",factor (n));
    int x = factor(n);
    printf("n! = %d\n",x);
    return 0;
}