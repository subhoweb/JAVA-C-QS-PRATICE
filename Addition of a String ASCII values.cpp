#include <stdio.h>
#include<string.h>
int main(){
    
    int i,sum=0;
    char n[20];
    printf("Enter the name: ");
    scanf("%[^\n]s",n);
    
   
   while(n[i]!='\0')
    {
        
        i++;
        sum +=n[i];
        
    }
    printf("%d ",sum);
    return 0;
}
