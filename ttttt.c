#include<stdio.h>

void sort(int array[], int size){
    for(int i = 0;i < size; i++){
        for(int j = 0; j < size;j++){
            if(array[j] > array[j +1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void print(int array[], int size){
    for(int i = 0;i < size; i++){
        printf(" %d", array[i]);
    }
}

int main(){

    int array[] = {0,9,8,7,6,5,1,4,2,3};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    print(array, size);


    return 0;
}