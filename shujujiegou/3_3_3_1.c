//用递归的方法求第n位斐波那契数列的值
// #include <stdint.h>
#include <stdio.h>
int Fibonacci (int n){
    if (n==0){return 0;}
    else if (n==1){return 1;}
    // else return (n-1)*(n-2);   斐波那契数列理解有问题，没nm递归
    else return Fibonacci(n-1)+Fibonacci(n-2);

}
int main() {
    // int x,n;
    int x = 0,n = 0;
    // scanf("%d\n",& n);
    x = Fibonacci (n);
    printf("%d\n",x);
    return 0;
}