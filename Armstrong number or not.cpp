#include <stdio.h>
int main() {
	int i,m,store,n = 371, temp = 0;
	store= n;
	while(n!=0)
	{
		m = n%10;
		temp  = temp + m * m * m;
		n = n/10;	 	
	}

	if(store==temp)
		printf("Is an Armstrong Number = %d",temp);
	else
		printf("Not an Armstrong Number = %d",temp);
	
	return 0;
}
