#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,flag=0;
	char str[20];
	printf("Enter the String ");
	scanf("%[^\n]s",str);
	len = strlen(str);
	for(i=0; i<=len; i++)
	{
		if(str[i]!= str[len-i-1])
		{
			flag =1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%s Is a palindrome string",str);
	}
	else{
		printf("%s Is not a palindrome string",str);
	}
}
