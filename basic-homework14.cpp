#include<stdio.h>
#include<stdlib.h>

int main(void)
{

int a,b,c;
printf("��J�T�ӼƧP�_�O�_�i�򦨤T����");
scanf("%d %d %d",&a,&b,&c);
if (a+b>c)
{
	if(b+c>a)
	{
		if(a+c>b)
		{
			printf("�i�򦨤T����\n");
		}
	}
}
else
{
printf("���i�򦨤T����\n");
}
system("pause");
}
