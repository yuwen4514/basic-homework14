#include<stdio.h>
#include<stdlib.h>

int main(void)
{

int a,b,c;
printf("輸入三個數判斷是否可圍成三角形");
scanf("%d %d %d",&a,&b,&c);
if (a+b>c)
{
	if(b+c>a)
	{
		if(a+c>b)
		{
			printf("可圍成三角形\n");
		}
	}
}
else
{
printf("不可圍成三角形\n");
}
system("pause");
}
