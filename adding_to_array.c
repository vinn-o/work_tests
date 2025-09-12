#include<stdio.h>
#include<string.h>

int main(){
    int x = 0;
    char cars[][10] ={"Mustang", "pajero", "ferari"};
    strcpy(cars[x], "tesla");
    for(int i=0; i<sizeof(cars)/sizeof(cars[0]);i++){
        printf("%s\n", cars[i]);
    }
   
    return 0;
}