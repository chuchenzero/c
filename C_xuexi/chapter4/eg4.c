//����ȡ��   
// �Լ�����û˼·����ô�����������λ��
#include <stdio.h>
int main(){
    int x;
    int yuan ;
    int yu;
    int ni=0;
    scanf("%d",&x);//��ȡx
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
    printf("%d������Ϊ%d",yuan,ni);
    printf("\n%d",ni);
    return 0;
}