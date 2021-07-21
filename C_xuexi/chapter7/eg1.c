//在给定数组中搜索一个数，输出他的位置
#include <stdio.h>
// int search(int key, int a[],int len);
int search(int key, int a[],int len){
    int retr =-1;
    for(int i=0;i < len;i++){
        if(key == a[i]){
            retr=i;
        }
    }
    return retr;
}
int main(){
    // int a[1,2,3,5,7,6,9,11,17,15,19,21,];
    int a[]={1,2,3,5,7,6,9,11,17,15,19,21,};//数组的定义方式 
    int r = search(11,a,sizeof(a)/sizeof(a[0]));         //int类型的函数的调用方式
    printf("%d",r);
    return 0;

}
