#include<stdio.h>
#include<math.h>

int main (){
    char name[20];
    int age;
    double h;
    double w;
    double fn;
    double sn;
    double tn;
    int fon;
    float tri;
    const float PI = 3.14;


    // BMI
    printf("Enter Your Name: ");
    fgets(name , 20 , stdin);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("\nEnter your Height(Meters): ");
    scanf("%lf", &h);

    printf("\nEnter your Weight(Kilogram): ");
    scanf("%lf", &w);

    printf("Hello %s",name);
    printf("You are %d years old. Your Height is %.2lfm. Youre Weight is %.2lf kg",age,h,w);

    double BMI = w / pow(h , 2 );
    printf("\nYoure BMI is: %.2lf", BMI);

    //Scientific Measurement
    printf("\n------------------------------------");
    printf("\nEnter a Number: ");
    scanf("%lf", &fn);

    printf("\nEnter a Number: ");
    scanf("%lf", &sn);

    printf("\nEnter a Number: ");
    scanf("%lf", &tn);

    double sr = sqrt(fn);
    double r = round(sn);
    double cl = ceil(sn);
    printf("\nSquare Root: %.2lf\n Round: %.2lf\n Ciel: %.2lf", sr, r, cl);

    double av = fabs(sn);
    double f = floor(sn);
    printf("\nAbsolute Value: %.1lf\nFloor: %.2lf", av ,f);


    printf("\nEnter a number: ");
    scanf("%d",&fon);
    double l = log(fon);
    printf("\nLog Value: %.2lf", l);
    
    //Trigo
    printf("\n------------------------------------");
    printf("\nEnter a Number: ");
    scanf("%f", &tri);
    float rad = tri * PI/180;
    float s = sin(rad);
    float c = cos(rad);
    float t = tan(rad);

    printf("\nSIN: %.2f\nCOS: %.2f\nTAN:  %.2f",s ,c ,t);







    return 0;


}