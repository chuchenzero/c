//求log2x
#include<stdio.h>
int main(){
    int x,y,z;
    scanf("%d",&x);
    z=x;
    while(x>1){
        x/=2;
        y++;
    }
    printf("log2 of %d is %d\n",z,y);

    return 0;
}