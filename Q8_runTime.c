/*
Author: ykcab
Section: SMC CS50
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int moreForLoops(int arr[], int size)
{
  int i, j,k;
  for(i = 0; i < size; i++){
    for(j = i+1; j < size; j++){
        for(k = j+1; k < size; k++){
            if(arr[i] == arr[k]){
               return 1;
               }
            }
       }
    }
    return 0;
}
int simplifiedVersion(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
            return 1;
        }
    }
    return 0;
}
int main()
{
  clock_t tic = clock();
  int arr[9] ={1,5,3,6,7,7,3,4,2};
  int arr_size = sizeof(arr);
  printf("%d\n",moreForLoops(arr, arr_size)); 
  clock_t toc = clock();
  printf("Run Time for moreForLoops function: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
  printf("Run Time for simplifiedVersion function: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
  return 0;
 }
