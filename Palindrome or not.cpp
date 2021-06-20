#include <stdio.h>
int main() {
	int i,m,store,n = 323, temp = 0;
	store= n;
	while(n!=0)
	{
		
		m = n%10;
		temp  = temp*10 + m;
		n = n/10;
		 	
	}

	
	if(store==temp)
		printf("Is a palindrome %d",temp);
	else
		printf("Not a palindrome %d",temp);
	
	return 0;
}
