#include <stdio.h>
#include <stdlib.h>
int main( int argc, char* argv[] ){
   //argv[1] being N and argv[2] being S
   //convert argv into ints
   int N = strtol(argv[1],NULL,10);
   int S = strtol(argv[1],NULL,10); 
   float avg;
   int arr[N];
   int sum =0;
   srand(S);
   int i1;
   for (i1=0;i1<N;i1++){
   	arr[i1]=rand();
   }
     
   int min=arr[0];
   int max=arr[0];


   int i2;
   for (i2=0;i2<N;i2++){
	   printf("%d\n",arr[i2]);
   }
   int i3;
   for (i3=0;i3<N;i3++){
  	avg = avg + arr[i3];
	if(arr[i3]>=max){
	max=arr[i3];
	}
	if(arr[i3]<min){
	min=arr[i3];
	}
   }
   avg= avg/ N;
   printf("min is: %d\n, max is: %d\n,avg is: %0.5f\n",min,max,avg); 
   return 0;
}
