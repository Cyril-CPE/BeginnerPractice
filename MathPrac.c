#include<stdio.h>
#include<math.h>

int main(){
    
    char name[20];
    int base;
    int exp;
    double comp;
    float tri;
    int abs;
    int loga;

    printf("\nEnter your name");
    fgets(name, 20, stdin);

    printf("\nEnter a Base Number: ");
    scanf("%d",&base);

    printf("\nEnter a Exponent Number: ");
    scanf("%d",&exp);

    int r = pow(base , exp);
    printf("\nExponential Multiplation Yield:%d",r);

    printf("\n\n----------------------------------------------\n");

    printf("Enter a decimal number: ");
    scanf("%lf",&comp);

    double compsqrt = sqrt(comp);
    double compround = round(comp);
    double compfloor = floor(comp);
    double compceil = ceil(comp);

    printf("\nSQUAREROOT: %.2lf\n ROUND: %.2lf\n  FLOOR: %.2lf\n CEIL: %.2lf",compsqrt,compround,compfloor,compceil);
    printf("\n\n----------------------------------------------");

    printf("\nGive me a number for Trigonometry: ");
    scanf("%f",&tri);
    float tri1= sin(tri);
    float tri2= cos(tri);
    float tri3= tan(tri);

    printf("----Trigonometry Result----\n Sin: %f\nCos: %f\n Tan: %f",tri1,tri2,tri3);
    printf("\n\n----------------------------------------------");

    printf("\nEnter a negative number: \n");
    scanf("%d",&abs);
    int abs1 = fabs(abs);
    printf("\nThe Absolute Value of Your Input is: %d",abs1);

    printf("\n\n----------------------------------------------");
    printf("\nEnter a number: \n");
    scanf("%d",&loga);
    int log1 = log(loga);
    printf("\nThe Logarithmec of Your Input is: %d",log1);
    printf("\n\n----------------------------------------------");



    return 0;






















}