#include<stdio.h>
int main(){
	int n = 18 ,i=1;
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("Factors are %d\n",i);
		}
		i++;
	}
	
	return 0;
}
