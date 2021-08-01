//用递归的方法求前n项斐波那契数列的值

#include <stdio.h>
int Fibonacci (int n){
    if (n==0){return 0;}
    else if (n==1){return 1;}
    else return Fibonacci(n-1)+Fibonacci(n-2);

}
int main() {
    int x = 0,n = 15
;
    for(;n>=1;n--){
    x = Fibonacci (n);
    printf("%d\n",x);
    }
    return 0;
}