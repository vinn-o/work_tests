#include<stdio.h>
#include<string.h>

typedef struct{
    char name[25];
    char password[12];
    int id;
}user;
int main(){

    user user1;
    strcpy(user1.name, "bro");
    strcpy(user1.password, "1234567fgg");
    user1.id = 123456;


    // user user1 = {"bro", "123456udwv", 12345678};
    
    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    
    return 0;
}