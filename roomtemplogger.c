#include<stdio.h>
//This program is a room temperature logger
//teach me please :(
int main (){
    char room[20];
    float reading1;
    float reading2;
    float reading3;
    const float ideal = 27.3;


    printf("Location: ");
    fgets(room, 20, stdin);
    printf("Recording Temperature at %s \n",room);

    printf("Enter 1st Reading: ");
    scanf("%f",&reading1);

    printf("Enter 2nd Reading: ");
    scanf("%f",&reading2);

    printf("Enter 3rd Reading: ");
    scanf("%f",&reading3);

    printf("The following are the different readings:\n First Reading:%.2fC\tSecond Reading:%.2fC\tThird Reading:%.2fC", reading1 , reading2, reading3);
    float totaltemp = reading1 + reading2 + reading3;
    float averagetemp = totaltemp / 3;
    float diff = ideal - averagetemp;

    printf("\nAverage Temperature at %s is %.2fC. Enjoy your Stay\n", room, averagetemp);
    printf("Difference from ideal temp is: %.2fC", diff);

    return 0;
}