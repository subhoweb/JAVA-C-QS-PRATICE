#include<stdio.h>
int main(){
 int a, b;
 printf("Enter the variables: ");
 scanf("%d%d",&a,&b);
 printf("Value of a and b is %d %d before swapping\n",a,b);
 a = a+b; 
 b = a-b; 
 a = a-b;

 printf("Value of a and b is %d %d after swapping",a,b);
 
 return 0;

}
