#include<stdio.h>
#include<string.h>

int main(){

char name[15];
int age;

printf("Hello, what is your name:");
fgets(name, 15, stdin);
name[strlen(name)-1] ='\0';
// scanf("%s", &name);

printf("Yellow %s, how old are you" ,name);
scanf("%d", &age);

printf("Hi %s, you are %d years old", name, age);

    return 0;
}