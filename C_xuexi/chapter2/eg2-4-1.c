#include <stdio.h>
int main(){
    int a, b, c, d,e,f;
    scanf("%d",&a);
    b=a/100;//百位
    c=a%100;//十位
    d=c/10;
    e=c%10;//个位
    f=(e*100)+(c*10)+b;
    printf("%d%",f);
    //printf("%d\n",b);
    //printf("%d\n",c);
    //printf("%d\n",e);
    return 0;
}