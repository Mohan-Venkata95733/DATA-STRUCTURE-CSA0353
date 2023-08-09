#include<stdio.h>
int main()
{
	int a[10],i;
	printf("Enter the values of a:");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even numbers are:");
	for(i=0;i<7;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d",a[i]);
		}
	}
	printf("odd numers are:");
	for(i=0;i<7;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d",a[i]);
		}
	}
	return 0;
}