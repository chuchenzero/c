#include <stdio.h>
int a[]={1,2,5,10,25,50};
char *name[]={"penny","nickel","dime","quarter","half-dollar"};
struct {            //把值和对应数据放在一起
    int a;
    char *name;
}coins[]={
    {1,"penny"},
    {5,"nickel"},
    {10,"dime"},
    {25,"quarter"},
    {50,"half-dollar"},
};
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
    int k=25;
   // int r=search(k,a,sizeof(a)/sizeof(a[0]));
   for (int i=0;i<sizeof(coins)/sizeof(coins[0]);i++){
       if(k == coins[i].a){
           printf("%s",coins[i].name);
           break;
       }
   }
    // if(r>1){
    //     printf("%s\n",name[r]);
    // }else{
    //     printf("wrong");撒大苏打
    
    // }
    return 0;

}
