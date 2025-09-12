 #include<stdio.h>

void sort(int array[], int size){
    for(int i =0; i < size;i++){
        for(int j= 0; j < size; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j +1];
                array[j + 1] =temp;
            }
        }
    }
}
void printA(int array[], int size){
    for(int i= 0; i < size; i++){
        printf("%d ", array[i]);
    }
}
int main(){

    int array[] = {8, 1, 0 ,2 ,9, 3, 9, 8, 6, 4, 3, 5, 6, 7,8 };
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    printA(array, size);
    return 0;
}
