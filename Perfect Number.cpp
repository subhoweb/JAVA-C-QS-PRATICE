#include<stdio.h>
int main(){
	
	int i,n=15,sum=0;
	
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum = sum + i;
		}
		
	}
	if(sum==n)  
    {  
        printf("Number is a Perfect");  
    }  
    else  
    {  
        printf("Number is not a Perfect");  
    }  
	
	
	return 0;
	
}
