//找零计算器
#include <stdio.h>

main()
{
    int x,y;
    printf("please enter your pay");
    scanf("%d",&x);
    printf("please enter your dollar");
    scanf("%d",&y);
    if (x>y){
        printf("no way to pay");
        return 0;
    }
    printf("it's your char %d ",y-x);
	return 0;
}