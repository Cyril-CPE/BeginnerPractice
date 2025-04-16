#include<stdio.h>

int main (){
    char name[30];
    double distance1;
    double distance2;
    double distance3;
    double fuel1;
    double fuel2;
    double fuel3;

    printf("To start, please enter your name: \n");
    fgets(name, 30, stdin);
    printf("Good Morning to you %s", name);


    printf("Enter your distance traveled in your recent trips \n");

    printf("First Trip: ");
    scanf("%lf",&distance1);

    printf("Second Trip: ");
    scanf("%lf",&distance2);

    printf("Third Trip: ");
    scanf("%lf",&distance3);

    printf("Enter your fuel consumed in your recent trips \n");
    
    printf("First Trip: ");
    scanf("%lf",&fuel1);

    printf("Second Trip: ");
    scanf("%lf",&fuel2);

    printf("Third Trip: ");
    scanf("%lf",&fuel3);


    double totalDistance = distance1 + distance2 + distance3;
    printf("You have travelled a total distance of %.2lfkm.\n", totalDistance);

    double totalFuel = fuel1 + fuel2 + fuel3;
    printf("You have consumed a total of %.2lfL of fuel.\n",totalFuel);

    double effeciency = totalDistance / totalFuel;
    printf("Your vehicle has an average total effeciency of %.2lf", effeciency);

    return 0;
}