#include<stdio.h>

void sorting(int array[], int size){
    for(int i = 0; i < size ;i++){
        for(int j = 0; j < size -i-1; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printing(int array[], int size){
    for(int i = 0; i < size;i++){
        printf("%d ", array[i]);
    }
}

int main(){

    int array [] = {8, 0, 9,1, 7, 2, 6, 3, 5, 4};
    int size = sizeof(array)/sizeof(array[0]);

    sorting(array, size);
    printing(array, size);

    return 0;
}