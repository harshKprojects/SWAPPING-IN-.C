#include<stdio.h>
int main()
{
	int angle1,angle2,angle3,sum;
	printf("enter angle1 of triangle: ");
	scanf("%d",&angle1);
    printf("enter angle2 of triangle: ");
	scanf("%d",&angle2);
	printf("enter angle3 of triangle: ");
	scanf("%d",&angle3);
	sum=angle1+angle2+angle3;
	if(sum==180)
	{
		printf("the triangle is valid" );
	}
	else 
	{
	printf("the traingle is not a valid");
	
	}
return 0;	
}
