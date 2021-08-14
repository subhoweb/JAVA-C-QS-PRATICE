#include <stdio.h>
int main() {
    long n = 3510659;
    int sum = 0;
    int i,m;
	
	while(n!=0)
	{   
		m = n%10;
		sum = sum + m;
		n = n/10;
		
	}
	
	printf("The addition is %d",sum);
}
