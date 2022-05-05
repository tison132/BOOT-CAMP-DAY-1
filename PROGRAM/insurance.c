/*
Name: Kavin J
Date: 05.05.2022
Question : insurance amount
*/
#include <stdio.h>
#include <string.h>
void insurance(int condition, int gender, int place, int pol_amount, int age)
{
    int pre_amount = 0;
    if (condition == 1 && (age >= 25 || age <= 35) && place == 2)
    {
        if (gender == 1 && pol_amount < 200000)
        {
            pre_amount = (pol_amount / 1000) * 4;
            printf("YOu are eligible for insurance\n");
            printf("your maximum insurance amount is %d\n", (200000 / 1000) * 4);
            printf("your premium amount is %d\n", (pol_amount / 1000) * 4);
            printf("The total amount is %d\n", pol_amount + pre_amount);
        }
        if (gender == 2 && pol_amount < 100000)
        {
            pre_amount = (pol_amount / 1000) * 3;
            printf("YOu are eligible for insurance\n");
            printf("your maximum insurance amount is %d\n", (100000 / 1000) * 3);
            printf("your premium amount is %d\n", (pol_amount / 1000) * 3);
            printf("The total amount is %d\n", pol_amount + pre_amount);
        }
    }
    else if (condition == 2 && (age >= 25 || age <= 35) && place == 1 && gender == 1 && pol_amount <= 10000)
    {
        pre_amount = (pol_amount / 1000) * 6;
        printf("YOu are eligible for insurance\n");
        printf("your maximum insurance amount is %d\n", (10000 / 1000) * 6);
        printf("your premium amount is %d\n", (pol_amount / 1000) * 6);
        printf("The total amount is %d\n", pol_amount + pre_amount);
    }
    else
    {
        printf("You are not eligible to insure\n");
    }
}
int main()
{
    int condition;
    int gender;
    int place;
    int age = 0;
    int pol_amount = 0;
    printf("Enter the health condition of the person(1 for good and 2 for poor) : ");
    scanf("%d", &condition);
    printf("\nEnter the gender of the person(1 for male and 2 for female): ");
    scanf("%d", &gender);
    printf("\nEnter the place of the person(1 for village 2 for city): ");
    scanf("%d", &place);
    printf("\nEnter policy amount: ");
    scanf("%d", &pol_amount);
    printf("\nEnter the age : ");
    scanf("%d", &age);
    insurance(condition, gender, place, pol_amount, age);
}