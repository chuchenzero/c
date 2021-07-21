//1+1/2+1/3+1/4+....+1/new
#include <stdio.h>
int main(){
    int n,m;
    float he;
    scanf("%d",&n);
    for(m=1;m<=n;m++){
        
        he=1.0/m+he;
    }
    printf("%f",he);
}