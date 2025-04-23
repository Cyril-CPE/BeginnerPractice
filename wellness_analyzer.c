#include<stdio.h>
#include<math.h>

int main (){
    char name[20];
    double h;
    double w;
    double BMI;

    printf("Enter your name: ");
    fgets(name, 20, stdin);

    printf("Enter your Height: ");
    scanf("%lf",&h);

    printf("Enter your Weight: ");
    scanf("%lf",&w);

    BMI = w / pow(h , 2);

    if(BMI <= 18.5){
        printf("BMI: %.2lf\nClassification: Underweight",BMI);
    }
    else if(BMI <= 24.9){
        printf("BMI: %.2lf\nClassification: Normal",BMI);
    }
    else if(BMI <= 29.9){
        printf("BMI: %.2lf\nClassification: Overweight",BMI);
    }
    else if(BMI >= 30){
        printf("BMI: %.2lf\nClassification: OBESE",BMI);
    }

    return 0;




}