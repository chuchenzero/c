//构建两个长度相同的数组，其二者一一对应
// #include <stdio.h>
// int search(int num,){

// }
// int main(){
//     int a[]={1,2,5,10,25,50};
//     char *name[]={"penny","nickel","dime","quarter","half-dollar"};
    
// }

#include <stdio.h>
int a[]={1,2,5,10,25,50};
char *name[]={"penny","nickel","dime","quarter","half-dollar"};

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
    int k=17;
    int r=search(k,a,sizeof(a)/sizeof(a[0]));
    if(r>1){
        printf("%s\n",name[r]);
    }else{
        printf("wrong");
    }
    return 0;

}
