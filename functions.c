#include<stdio.h>

void birthday(char x[], int y){
    printf("Happy birhtday to you...");
    printf("\nHappy birthday dear %s", x);
    printf("\nHappy %d years old", y);
}
int main(){
    char name[]= "bro";
    int age = 21;
    birthday(name, age);
    // printf("%d bytes", sizeof(name));


    return 0;
}