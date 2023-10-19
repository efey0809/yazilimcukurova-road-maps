#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
struct randomNums{
    int a;
};
*/
FILE * fptr;

struct sayilar{
    int x;
};


int main(){

    int ctr,a;
    time_t t;
    srand(time(&t));

    /*
    struct randomNums random[100]; // Array of three structure variables
    // Get the information about each book from the user

        for (ctr = 0; ctr < 100; ctr++){
            random[ctr].a=rand()%100+1;
        }
    */

    int inner, outer, temp, didSwap,b, nums[9999];
    char c;

    struct sayilar sy[1];

    for (ctr = 0; ctr < 1; ctr++){
            sy[ctr].x=rand()%10000+1;
        }

    /*
    printf("If you want to add number press y or Y before the adden number.\n");

        while(1){
            printf("Do you want to add number?\t");
            scanf(" %c", &c);

                if(c == 'y'){
                    scanf(" %d", &sy[ctr].x);
                    ctr = ctr+1;
                }
                else if(c == 'Y'){
                    scanf(" %d", &sy[ctr].x);
                    ctr = ctr+1;
                }
                //else if( (c != 'y') && (c!= 'Y') ){
                    //ctr = ctr-1;
                    //break;
                //}
                else{
                    ctr = ctr -1;
                    break;
                }
        }
    */
    fptr = fopen("C:\\users\\Emrullah\\Desktop\\random.txt","w");

    if (fptr == 0){
        printf("Error--file could not be opened.\n");
        exit (1);
    }

    fprintf(fptr,"Here is the random numbers: \n");

    for (ctr = 0; ctr < 1; ctr++){
        fprintf(fptr, "%d\n", sy[ctr].x);
    }

    for (ctr = 0; ctr < 1; ctr++){
        printf("\n%d\n", sy[ctr].x);
    }

    b = ctr;

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

    fptr = fopen("C:\\users\\Emrullah\\Desktop\\sort_random.txt","w");
// Test to ensure that the file opened

    if (fptr == 0){
        printf("Error--file could not be opened.\n");
        exit (1);
    }

    fprintf(fptr,"Here is the sort of random numbers: \n");

    for (ctr = 0; ctr < 1; ctr++){
        fprintf(fptr, "%d\n", sy[ctr].x);
    }

    fclose(fptr); // Always close your files

    printf("\n\tSorting progress is finished\n");

    return 0;
}
