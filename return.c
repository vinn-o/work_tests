#include<stdio.h>

double square(double x){
    double results = x*x;
    //  printf("%lf", x);
    return results;
}
int main(){

 double x =square(3.21);
    printf("%lf", x);



    return 0;
}