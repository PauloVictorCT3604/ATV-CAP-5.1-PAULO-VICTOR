#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n){

    int i, j, minIndex, temp;

            for(i = 0; i < n - 1; i++){

                minIndex = i;

                        for (j = i + 1; j < n; j++) {
                                
                                if (arr[j] < arr[minIndex]) {
                                
                                minIndex = j;
                    
                                }
                            
                        }

            temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
            
            }
}

void printArray(int arr[], int size){

            for (int i = 0; i < size; i++){

                printf("%d ", arr[i]);
            
            }

        printf("\n");
}

int main(){

    int arr[] = {64, 935, 52, 232, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

        printf("Array original: \n");
        printArray(arr, n);

        selectionSort(arr, n);

        printf("Array ordenado: \n");
        printArray(arr, n);

    return 0;
}
