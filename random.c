#include <stdio.h>
#include <stdlib.h>
#include <time.h>

FILE * fptr;
FILE * fptr2;

struct sayilar{
    int x;
};

int main(){
	
	int inner, outer, temp, didSwap, a, b, ctr, nums[9999];
	time_t t;
	srand(time(&t));
	
	struct sayilar sy[100];

	for(ctr=0; ctr<100; ctr++){
		sy[ctr].x=rand()%1000+1;
	}

	fptr=fopen("/home/emrullah/Documents/random.txt", "w");

        if(fptr==0){
                printf("Error! File could not be opened.\n");
                exit(1);
        }

        fprintf(fptr, "Here is the random numbers: \n");

        for(ctr=0; ctr<100; ctr++){
                fprintf(fptr, "%d\n", sy[ctr].x);
        }
	
	printf("\n\tRandom numbers genareted\n");

	fclose(fptr);
	
	b=ctr;

        for(outer=0; outer<ctr; outer++){
            didSwap=0;
            for(inner=outer; inner<b; inner++){
                if(sy[inner].x<sy[outer].x){
                    temp = sy[inner].x;
                    sy[inner].x = sy[outer].x;
                    sy[outer].x = temp;
                    didSwap = 1;
                }
            }
            if(didSwap == 0){
                break;

            }
        }

	fptr2=fopen("/home/emrullah/Documents/sortedrandom.txt", "w");

        if(fptr2==0){
                printf("Error! File could not be opened.\n");
                exit(1);
        }

        fprintf(fptr2, "Here is the sorted random numbers: \n");

        for(ctr=0; ctr<100; ctr++){
                fprintf(fptr2, "%d\n", sy[ctr].x);
        }

	printf("\n\tRandom numbers sorted\n");

	fclose(fptr2);

	return 0;
}
