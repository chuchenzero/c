//老师例子
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{

srand(time(0));
int number=rand()%100+1;
int count=0;
int a=0;
printf("我已经想好一个1到100之间的数,请猜猜这个1-100之间的数：\n");
do  {
scanf("%d", &a);	
count ++;
if (a>100||a<0) {
	printf("你输入的数超出范围！请重新输入:\n");
	}
	 else if (a>number ) {
		printf("你猜的数大了,请再试一次:\n");
		 
	} else if(a<number) {
		printf("你猜的数小了,请再试一次:\n");
     	}	
	}
		
while ( a !=number);
printf ("太棒了，你用了%d次就猜到了答案。\n正确答案就是%d,", count,number);
if (count<=7) {
	printf("这就是二分法");}
	else  {
	 printf("遍历法只适用于小范围数字"); }
	 

return 0;
}