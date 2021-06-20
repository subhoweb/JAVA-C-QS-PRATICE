#include <stdio.h>

int main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    char lower,upper;
    
    
    lower  = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    upper  = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    
    
    if(lower || upper)
     printf("Vowel");
    else
     printf("Consonant");
}
