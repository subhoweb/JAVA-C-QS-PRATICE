#include<stdio.h>
int main(){
	int b=8, e = 3;
	long res =1;
	while(e!=0)
	{
		res = res * b;
		--e;
	}
	printf("To the power value is %ld",res);
	return 0;
}
