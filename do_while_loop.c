#include<stdio.h>

int main(){

    int number =0;
    int sum = 0;

    do{
        printf("\nEnter a # above zero: ");
        scanf("%d", &number);
    
        if(number>0){
            sum +=number;
            
        }
    }while(number >0);
        printf(" sum =%d", sum);
    return 0;
}