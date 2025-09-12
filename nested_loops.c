#include<stdio.h>
#include<string.h>

int main(){
int column;
int row;
char symbol;

printf("Enter number of rows:");
scanf("%d", &row);

printf("Enter number of columns:");
scanf("%d", &column);

scanf("c");

printf("Enter a symbol:");
scanf("%c", &symbol);

for(int i=1;i<=row;i++){
    for(int j=1;j<=column;j++){
         printf("%d",j);
    }
   
    printf("\n");
}


    return 0;
}