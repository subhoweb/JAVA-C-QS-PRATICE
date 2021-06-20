#include <stdio.h>
int main() {
	
	int i,n = 5, flag = 0;

	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("Not a prime number");
			flag = 1;
			break;
		}				
	}
	if(flag==0){
		printf("Is a prime number");	
	}
	
}
