#include<stdio.h>
#include<math.h>

int main (){

    double A;
    double B;


    printf("Enter the Measure of an side A: ");
    scanf("%lf",&A);

    printf("Enter the Measure of an side B: ");
    scanf("%lf",&B);

    double C = sqrt(pow(A,2) + pow(B,2));
    printf("Hypotenuse/C is: %.2lf",C);

    return 0;
}