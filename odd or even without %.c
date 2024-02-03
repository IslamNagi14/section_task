#include<stdio.h>
void main(void)
{
	int num ,ch_num;
	printf("enter any number : ");
	scanf("%d",&num);
	ch_num=num/2;
	if(num == (ch_num * 2))
	{
		printf("%d is even",num);
	}
	else
	{
        printf("%d is odd",num);	
	}
}