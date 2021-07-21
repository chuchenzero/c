//猜数字游戏 (0,100)
#include <stdio.h>
int main(){
    int x=14, y,z=1;
    scanf("%d", &y);
    while(x != y){
        z++;
        if(y>x){
            printf("%d不对，大了",y);
        }else{
            printf("%d不对，小了",y);
        }
        scanf("%d", &y);
    }
    printf("%d是正确答案,你猜了%d次",x,z);

    return 0;
}