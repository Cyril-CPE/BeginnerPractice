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
    scanf("%lf",distance2);

    printf("Third Trip: ");
    scanf("%lf",distance3);

}