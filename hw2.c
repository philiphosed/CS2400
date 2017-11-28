#include <stdio.h>

int main( int argc, char* argv[]){

   int a,b,c;
   printf("Please input an integer value for a: ");
   scanf("%d", &a);
   printf("Please enter input for b value:");
   scanf("%d",&b);
   while (b >= a)
      {
         b = b - a;
         c = c + 1;
      }

  printf("A is %d\n, B is %d\n, C is %d\n",a,b,c);
 

  return 0;  

}
