#include<stdio.h>
int main()
{
	//swapping of 2 numbers by using third variable
	int a,b,c;
	printf("enter value of a: ");
	scanf("%d",&a);
	printf("enter value of b: ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping a %d\n",a);
    printf("after swapping b %d\n",b);
	return 0;
	
}
