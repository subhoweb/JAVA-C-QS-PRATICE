#include<stdio.h>
int fact(int r)
{
		int x = 1,i=1;
		while(i<=r)
		{
			x = x*i;
			i++;	
		}
		return x;			
}

int main()
{
	int sum=0,m,r,f,n=145;
	int k = n;
	
	while(k!=0)
	{
		r = k%10;
		f=fact(r);
		k /=10;	
		sum = sum + f;
			
	}
	if(sum==n)  
    {  
        printf("Number is a strong");  
    }  
    else  
    {  
        printf("Number is not a strong");  
    }  
	
	return 0;
}


