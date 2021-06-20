#include <stdio.h>
int main() {
    long n = 358596;
    int sum = 0;
    int i,m;
	do
	{   
		m = n%10;
		sum = sum + m;
		n = n/10;
		
	}while(i < n);
	
	printf("The addition is %d",sum);
}
