#include<stdio.h>
void main(void)
{
	 int num;
	 printf("enter any number : ");
	 scanf("%d",&num);
	if((num & 1) == 0)
	{
		printf("%d is even number",num);
	}
	else{printf("%d is odd number",num);}
		
	

}
