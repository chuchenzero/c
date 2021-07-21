//整数取逆   
// 自己做，没思路，怎么获得输入数的位数
#include <stdio.h>
int main(){
    int x;
    int yuan ;
    int yu;
    int ni=0;
    scanf("%d",&x);//获取x
    yuan =x;
    while (x>0){
        yu = x % 10;
        printf("%d\n",yu);
        x /= 10;
        ni = ni*10+yu;
        printf("%d\n",ni);
        printf("%d\n",x);
    }
    // ni=ni*10+x;
    printf("%d的逆序为%d",yuan,ni);
    printf("\n%d",ni);
    return 0;
}