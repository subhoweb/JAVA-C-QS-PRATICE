#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Input Start ");
	scanf("%d",&i);
	printf("Input End ");
	scanf("%d",&n);
	
	for(i;i<=n;i++)
	{
		sum = sum +i;
	} 
	
	printf("%d",sum);
	return 0;
}
