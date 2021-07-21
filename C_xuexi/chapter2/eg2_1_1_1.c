#include <stdio.h>
int main(){
    int price;
    printf("plase enter the amount:");
    scanf("%d",& price);
    int change = 100-price;
    printf("change for you %d doller",change);
    return 0;
}