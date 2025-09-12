#include<stdio.h>
#include<string.h>

struct player{
    char name[12];
    char password[25];
    int id;
};
int main(){
    struct player player1 = {"bro", "12345678sdf", 123456780};
    struct player player2;

  /*  strcpy(player1.name, "bro");
    player1.score = 4; 
    strcpy(player2.name, "bruh");
    player2.score = 9;

    
    */
    printf("%s\n", player1.name);
    printf("%s\n", player1.password);
    printf("%d\n", player1.id);
    return 0;
}