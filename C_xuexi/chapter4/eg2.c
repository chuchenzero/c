//求用户输入值的平均数
#include <stdio.h>
int main() {
    int x,y=0,z=0;//x——用户输入值、y——计数器、z_累加值
    while(x != -1){
    z+=x;
    y++;
    scanf("%d",&x);
    }
    /* do{
        scanf("%d",&x);
        if(x!=-1){
            z+=x;
            y++;
        }
    }while(x!=-1);//do-while在while条件(即括号)后后要加";" */
    printf("%lf\n",1.000000*z/y);//在"z/y"的z之前加上代码"1.0*"转换为浮点运算
    printf("x=%d y=%d z=%d\n",x,y,z);
    return 0;
}
//解法2
/* while(x!=-1){
    z+=x;
    y++;
    scanf("%d",&x);
} */