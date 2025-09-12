#include<stdio.h>
#include<string.h>

int main(){

    char name[25];

printf("Hello, what is you name:");
fgets(name, 25, stdin);
name[strlen(name)-1] = '\0';

while(strlen(name) ==0){
    printf("You didn't enter your name !!!!");
    printf("Hello, what is you name:");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
}
printf("Hello %s, how do you do", name);
    return 0;
}