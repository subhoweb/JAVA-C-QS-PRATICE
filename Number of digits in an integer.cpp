#include <stdio.h>
int main() {
    long n = 35294;
    int count = 0;
    int i;
	do
	{   
		n = n/10;
		count++;
		
	}while(i < n);
	
	printf("The digit consists with %d integers",count);
}
