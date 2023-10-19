#include <stdio.h>
#include <stdlib.h>
#include <time.h>

FILE * fptr;

struct randomNums{
    int a;
};

int main(){
	
	int ctr,a;
	time_t t;
	srand(time(&t));
	
	struct randomNums random[100];

	for(ctr=0; ctr<100; ctr++){
		random[ctr].a=rand()%1000+1;
	}
	
	fptr=fopen("/home/emrullah/Documents/random.txt", "w");

	if(fptr==0){
		printf("Error! File could not be opened.\n");
		exit(1);
	}
	
	fprintf(fptr, "Here is the random numbers: \n");
	
	for(ctr=0; ctr<100; ctr++){
		fprintf(fptr, "%d\n", random[ctr].a);
	}

	fclose(fptr);
	
	printf("\n\tRandom numbers genareted\n");

	return 0;
}
