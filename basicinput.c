#include <stdio.h>

int main( int argc, char* argv[]){
	int input = strtol(argv[1],NULL,10);
	signed char output2 = input;
	unsigned char output1 = input;
	printf("Unsigned representation is %u\n",output1);
        printf("signed representation is %d\n",output2);
}
