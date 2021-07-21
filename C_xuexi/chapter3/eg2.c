//求数字位数
#include <stdio.h>
int main(){
    int x, y,z;
    printf("please enter the number");
    scanf("%d",&x);
    while(x>0){
        x/=10;
        y++;
    }
    printf("wei shu wei %d",y);
    return 0;
}