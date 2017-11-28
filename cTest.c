#include <stdio.h>

int main(int argc, char* argv[]){
  int var = 42;
  double y = 10.1;
  printf("Hello World\n");
  int i ;
  for (i=0;i<argc;i++){
  printf("Argument %d is %s\n",i,argv[i]);
  }
  return 0;

}

