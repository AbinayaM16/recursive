#include<stdio.h>
int sum(int n);
main()
{
	int n;
	printf("enter the numbers = ");
	scanf("%d",&n);
	printf("\nsum of the digits %d is %d",n,sum(n));
	return 0;
}
int sum(int n)
{
	if(n!=0)
       return(n%10+sum(n/10));
    else
       return 0;
}
