//写一个程序，输入数量不确定的【0，9】范围的整数，统计每一种数字出现的次数，输入-1表示结束
// #include <stdio.h>
// int main(){
//     int jishuqi[9];
//     int x;
//     do
//     {
//         scanf("%d",x);
//         jishuqi[x]++;
//         printf("%d %d\n",jishuqi[x],x);
//     } while (x!=-1);
//     for (int i=0;i<=9;i++){
//         printf("%d",jishuqi[i]);
//     }
//     return 0;

// }
#include <stdio.h> 
int main(){
    int jishuqi[10];
    int i,x;
    for (i=0;i<10;i++){
        jishuqi[i]=0;
    }
    scanf("%d",&x);
    while (x != -1){
        if(x>=0 && x<=9){
            jishuqi[x]++;
        }
        printf("%d:%d\n",x,jishuqi[x]);
        scanf("%d",&x);
       
    }
    for (i=0;i<10;i++){
        printf("%d:%d\n",i,jishuqi[i]);
    }
    return 0;

}