//��ʦ����
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{

srand(time(0));
int number=rand()%100+1;
int count=0;
int a=0;
printf("���Ѿ����һ��1��100֮�����,��²����1-100֮�������\n");
do  {
scanf("%d", &a);	
count ++;
if (a>100||a<0) {
	printf("���������������Χ������������:\n");
	}
	 else if (a>number ) {
		printf("��µ�������,������һ��:\n");
		 
	} else if(a<number) {
		printf("��µ���С��,������һ��:\n");
     	}	
	}
		
while ( a !=number);
printf ("̫���ˣ�������%d�ξͲµ��˴𰸡�\n��ȷ�𰸾���%d,", count,number);
if (count<=7) {
	printf("����Ƕ��ַ�");}
	else  {
	 printf("������ֻ������С��Χ����"); }
	 

return 0;
}