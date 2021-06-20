#include <stdio.h>

int main()
{
    char c;
    printf("Enter an character: ");
    scanf("%c", &c);
    
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
     printf("Character");
    else
     printf("Not a Character");
    return 0;
}
