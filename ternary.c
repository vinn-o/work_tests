#include<stdio.h>
int findMax(int x, int y){
    return(x > y) ? x:y;
}
int main(){

int max = findMax(5.9757, 6);
printf("%d", max);

    return 0;
}