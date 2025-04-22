#include<stdio.h>
#include<math.h>

int main(){
    double temp;

    printf("Enter your Temperature in Celsius: ");
    scanf("%lf",&temp);

    if(temp < 0){
        printf("\nFreezing");
    }
    else if (temp <=20){
        printf("\nCold");
    }
    else if (temp <=30){
        printf("\nNormal");
    }
    else if (temp <=40){
        printf("\nHot");
    }
    else if (temp > 40){
        printf("\nToo Hot");
    }

    

    return 0;
}