#include <stdio.h>
 int main( int argc, char* argv[] ){
 int input;
 printf("Please enter your integer:");
 scanf("%d",input); 
 int i1;
 int rem;
 char bin[33];
 char zero="0";
 char one="1";   
 for (i1=33;i1>=0;i1++){
	rem=input%2;
	
	if (rem==1){
	bin[i1]=one;
	}


	if (rem==1 && i1%3==0){
	bin[i1]="F";
	}

	if (rem==1 && i1%5==0){
	bin[i1]="B";
	}
	
	else{
	bin[i1]=zero;
	}

	rem=input/2;

   }

   return 0;
}

