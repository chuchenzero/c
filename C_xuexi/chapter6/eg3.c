//求出1到10.20到30和30到45的三个和
#include <stdio.h>
void qiuhe(int a, int b){
    int he=0;
    if(a<b){
        for(;a<=b;a++){
            he += a;  
        }
        printf("he = %d\n",he);
    }
    else{
        for(;b<=a;b++){
            he += b;
    }
    printf("he=%d\n",he);
    }
}
int main(){
    int x, y;
    scanf("%d %d",&x,&y);
    qiuhe(x,y);
    
    
    return 0;
}
//此类自命名函数输出位置在命名函数结尾，而非主函数结尾
//void 的返回类型为空，即不返回任何东西
//调用函数->  函数名(参数值)；<-括号不能省略
//若为int等带返回值的返回类型，必须return值，如 return a；