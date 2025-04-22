#include<stdio.h>
#include<math.h>

int main(){
    //AREA
    const double PI = 3.14;
    double r;

    printf("===========================\nEnter the radius: ");
    scanf("%lf",&r);
    double A = PI * pow(r,2);
    printf("The area is: %.2lf\n",A);

    //CIRCUMFERENCE
    printf("===========================\n");
    double C = 2 * PI * r;
    printf("The Circumference is: %.2lf",C);

    return 0;
}