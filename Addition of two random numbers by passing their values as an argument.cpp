#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add(int x, int y)
{
    if(y==0)
        return x;
    else
        return(1+add(x,y-1));
}

int main()
{
    int n1,n2,sum=0;
    srand(time(NULL));
    n1 = rand()%50;
    n2 = rand()%50;
    sum =add(n1,n2);
    printf("Sum of %d and %d is %d",n1,n2,sum);

    return 0;
}
