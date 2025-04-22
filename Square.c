#include<stdio.h>
#include<math.h>

int main(){
    double s;
    double p;
    double a;


    printf("Enter Side Measure: ");
    scanf("%lf",&s);

    p = 4 * s;
    a = pow (s,2);

    printf("Perimeter: %.1lf\n Area: %.1lf",p,a);

    return 0;
    
}