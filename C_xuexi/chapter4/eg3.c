//��������Ϸ (0,100)
#include <stdio.h>
int main(){
    int x=14, y,z=1;
    scanf("%d", &y);
    while(x != y){
        z++;
        if(y>x){
            printf("%d���ԣ�����",y);
        }else{
            printf("%d���ԣ�С��",y);
        }
        scanf("%d", &y);
    }
    printf("%d����ȷ��,�����%d��",x,z);

    return 0;
}