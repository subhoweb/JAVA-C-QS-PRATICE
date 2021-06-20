#include<stdio.h>
#define PI 3.14
int main(){
 int r;
 float res=0;
 printf("Enter the value of radius: ");
 scanf("%d",&r);

  res  = PI * r * r ;
  
  printf("The area of the circle is: %.2f",res);
   
  return 0;
}
