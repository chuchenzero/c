//求出1到10.20到30和30到45的三个和
#include <stdio.h>
void qiuhe(int a, int b);           //函数的 原型声明
int main(){
    int x, y;
    scanf("%d %d",&x,&y);
    qiuhe(x,y);
    
    
    return 0;
}
void qiuhe(int a, int b){           //12~26 函数的定义
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