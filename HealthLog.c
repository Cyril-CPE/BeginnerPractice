//FInal Exercise for scanf, fgets and identifiers.
//will later proceed to conditionals.maybe.

#include<stdio.h>

int main(){
    char name[20];
    const float water = 2.7;
    const double kcal = 2000;

    float water1;
    float water2;
    float water3;
    double kcal1;
    double kcal2;
    double kcal3;

    printf("Welcome to Health Logger, to start please enter your name: ");
    fgets(name, 20, stdin);
    printf("\n-------------------------------------------------------------------");
//-----------------------------------------------------------------------------------
    printf("\nEnter the Water Consume in day 1: ");
    scanf("%f",&water1);

    printf("\nEnter the Water Consume in day 2: ");
    scanf("%f",&water2);

    printf("\nEnter the Water Consume in day 3: ");
    scanf("%f",&water3);

    float totalWater = water1 + water2 + water3;
    float averageWater = totalWater / 3;

    double day1wdiff = water - water1;
    double day2wdiff = water - water2;
    double day3wdiff = water - water3;
    printf("\n-------------------------------------------------------------------");
//----------------------------------------------------------------
    printf("\nEnter the Calories Consume in day 1: ");
    scanf("%lf",&kcal1);

    printf("\nEnter the calories Consume in day 2: ");
    scanf("%lf",&kcal2);

    printf("\nEnter the Calories Consume in day 3: ");
    scanf("%lf",&kcal3);

    double totalKcal = kcal1 + kcal2 + kcal3;
    double averageKcal = totalKcal / 3;

    double day1kdiff = kcal - kcal1;
    double day2kdiff = kcal - kcal2;
    double day3kdiff = kcal - kcal3;
    printf("-------------------------------------------------------------------");
//------------------OUTPUT----------------------------------------------
    printf("\nHello There %s\n\nThis is the summary of your Health Log", name);
    printf("\n-------------------------------------------------------------------");
    printf("\nWater Intake:\nTotal: %.2fL\nAverage:%.2fL",totalWater, averageWater);
    printf("\n-------------------------------------------------------------------");
    printf("\nCalorie Intake:\nTotal:%.2lfkcal\nAverage:%.2lfkcal",totalKcal,averageKcal);
    printf("\n-------------------------------------------------------------------");
    printf("\n\nDay 1: You have drink %.2fL of Water. \nRecommended Intake is %.2fL\nDifference is: %.2fL",water1,water,day1wdiff);
    printf("\n-------------------------------------------------------------------");
    printf("\nDay 2: You have drink %.2fL of Water. \nRecommended Intake is %.2fL\nDifference is: %.2fL",water2,water,day2wdiff);
    printf("\n-------------------------------------------------------------------");
    printf("\nDay 3: You have drink %.2fL of Water. \nRecommended Intake is %.2fL\nDifference is: %.2fL",water3,water,day3wdiff);
    printf("\n-------------------------------------------------------------------");

    printf("\n\nday 1: You have consumed %.2lfkcal. \nRecommended Intake is %.2lfkcal\nDifference is:%.2lfkcal",kcal1,kcal,day1kdiff);
    printf("\n-------------------------------------------------------------------");
    printf("\nday 2: You have consumed %.2lfkcal. \nRecommended Intake is %.2lfkcal\nDifference is:%.2lfkcal",kcal2,kcal,day2kdiff);
    printf("\n-------------------------------------------------------------------");
    printf("\nday 3: You have consumed %.2lfkcal. \nRecommended Intake is %.2lfkcal\nDifference is:%.2lfkcal",kcal3,kcal,day3kdiff);
    printf("\n-------------------------------------------------------------------");










    return 0;

}