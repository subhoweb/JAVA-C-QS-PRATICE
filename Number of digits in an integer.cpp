#include <stdio.h>
int main() {
    long n = 35;
    int count = 0;
    while(n!=0)
    {
        n=n/10;
        count ++;
    }
	
	printf("The digit consists with %d integers",count);
}
