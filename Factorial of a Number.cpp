#include<stdio.h>
int main()
{
	int i=1, n=5; 
	long fact = 1;
	
	while(i<=n)
	{
		fact = fact*i;
		i++;
	}
	printf("%ld",fact);
	return 0;
}
