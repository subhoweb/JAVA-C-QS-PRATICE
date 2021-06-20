#include<stdio.h>
int main()
{
	int i,m,n=206,rev=0;
	while(i<n)
	{
		m = n%10;
		rev = (rev * 10) + m;
		n = n/10;
	}
	
	printf("%d",rev);
	return 0;
}
