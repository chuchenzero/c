//凑零钱
#include <stdio.h>
int main(){
    int x;
    int one,two,five;
    int exit=0;
    scanf("%d",&x);
    for(one=0;one<10*x;one++ ){
        for(two=0;two<10*x;two++ ){
            for(five=0;five<10*x;five++ ){
                if(one*1+two*2+five*5 == x*10 ){
                    printf("give change %d 1$,%d 2$,%d 5$\n",one,two,five);
                    exit=1;
                    break;
                }
            }
            if(exit==1)
            break;
        }
        if(exit==1)
        break;
    }        
    return 0;
}

//使用goto语句跳出循环，“goto out；”> “out：”
// #include <stdio.h>
// int main(){
//     int x;
//     int one,two,five;
//     int exit=0;
//     scanf("%d",&x);
//     for(one=0;one<10*x;one++ ){
//         for(two=0;two<10*x;two++ ){
//             for(five=0;five<10*x;five++ ){
//                 if(one*1+two*2+five*5 == x*10 ){
//                     printf("give change %d 1$,%d 2$,%d 5$\n",one,two,five);
//                     exit=1;
//                     goto out;
//                 }
//             } 
//         }
    
//     } 
//     out:       
//     return 0;
// }