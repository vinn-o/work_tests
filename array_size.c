#include<stdio.h>

int main(){

double price[] = {5.00, 10.00, 15.50, 24.40, 23.60, 40.70, 23};

    // printf("%d byte", sizeof(price));


    for(int i =0;i<sizeof(price)/sizeof(price[3]);i++){

        
    printf("%.2lf\n", price[i]);
 }

    return 0;
}