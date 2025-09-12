#include<stdio.h>
#include<string.h>
#include<math.h>
struct customer{
    char name[15];
    int order;
    int orderTotal;
};
int main(){
    struct customer customer1;
    struct customer customer2;

    customer1.orderTotal =0;
    printf("Please enter your name: ");
    // strcpy(customer1.name, fgets(name, 15, stdin));
    fgets(customer1.name, 15, stdin);
    customer1.name[strlen(customer1.name) -1] ='\0';

    printf("Hello %s,Please select the serial # of your  order: ", customer1.name);
    int tea = 15;
    int coffee = 15;
    int mandazi = 10;
    int chapati = 20;
    int beans = 40;
    int exit = 0;

    do{
        // printf("order");
        scanf("%d ", &customer1.order);
        scanf("%d", &exit);

        if(exit==0){
        customer1.orderTotal +=customer1.order;
        }
    }while(customer1.order>0);
    return 0;
}