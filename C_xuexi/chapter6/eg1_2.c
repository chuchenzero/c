//求平均数、并输出所有大于平均数的输入值
#include <stdio.h>
int main(){
    int x;
    double sum = 0;
    int cnt = 0;
    int mumber[10];
    scanf("%d", &x);
    while( x != -1){
        mumber[cnt] = x;
        sum += x;
        cnt++;
        scanf("%d", &x);
    }
    if(cnt>10){
        printf("too long");
    }
    else if(cnt>0){
            printf("%f\n", sum/cnt);
            int i;
            float j=sum/cnt;        
            for(i=0;i<cnt;i++){         //可以不定义j，直接在if条件里写“sum/cut”
                if (mumber[i]>j)
                {
                    printf("%d\n",mumber[i]);
                }
                
            }
        }
    
    return 0;
}