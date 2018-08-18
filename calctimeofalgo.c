#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *arr1,*arr2;
    clock_t start1,start2;

    arr1 = (int *)malloc(sizeof(int)*32000);
    arr2 = (int *)malloc(sizeof(int)*32000);
    srand(time(NULL));

    int i,j;
    for(i = 0; i < 32000; i++){
        arr1[i] = rand()%5000;
        arr2[i] = rand()%5000;
    }

   start1 = clock();
   printf("Using bubble sort\n");
   for(i = 0; i < 32000; i++){
    for(j = 0; j < 32000-i-1; j++){
        if(arr1[j] > arr1[j+1]){
            arr1[j] = arr1[j]^arr1[j+1];
            arr1[j+1] = arr1[j]^arr1[j+1];
            arr1[j] = arr1[j]^arr1[j+1];
        }
    }
   }

   start1 = clock() - start1;
   double time = ((double)start1)/CLOCKS_PER_SEC;

   printf("Bubble sort took %f time to execute: ", time);


   start2 = clock();
   printf("\nUsing selection sort");
   int min_i;


    for (i = 0; i < 31999; i++)
    {

        min_i = i;
        for (j = i+1; j < 32000; j++){
          if (arr2[j] < arr2[min_i]){
            min_i = j;
            arr2[min_i] = arr2[min_i]^arr2[i];
            arr2[i] = arr2[min_i]^arr2[i];
            arr2[min_i] = arr2[min_i]^arr2[i];
          }
        }


    }
    start2 = clock() - start2;
    double time2 = ((double)start2)/CLOCKS_PER_SEC;
    printf("\nTime taken by selection sort is %f: \n", time2);
    printf("Ratio of times taken by bubble/selection sort: %f\n",time/time2);


    return 0;
}

