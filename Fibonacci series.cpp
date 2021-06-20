#include<stdio.h>
int main()
{
	int i,n=10,t1= 0,t2=1,nxt;
	for(i=1;i<=n;i++)
	{
		printf("%d ",t1);
		nxt = t1+t2;
		t1 = t2;
		t2 = nxt;
	}
	return 0;
}
