#include<stdio.h>

int main(){
    const float recdaily = 2.7;
    float day1;
    float day2;
    float day3;
    char name[10];

    printf("-----Hydration Tracker----\n");
    
    printf("How many Liters for Day 1: \n");
    scanf("%f",&day1);

    printf("How many Liters for Day 2: \n");
    scanf("%f",&day2);

    printf("How many Liters for Day 3: \n");
    scanf("%f",&day3);

    float totalWaterintake = day1 + day2 + day3;
    float averageWaterintake = totalWaterintake / 3;

    printf("You drank a total of %.2f Liters of Water in 3 days.\n",totalWaterintake);
    printf("You drank an average %.2f Liter everyday\n", averageWaterintake);

    float intake = recdaily - averageWaterintake;
    printf("%f", intake);
    return 0;
}