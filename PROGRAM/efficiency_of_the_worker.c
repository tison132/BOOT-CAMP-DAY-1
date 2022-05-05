/*
Name: Kavin J
Date: 05.05.2022
Question : efficieny of the worker
*/
#include <stdio.h>
int main()
{
    int s_t = 0, e_t = 0;
    printf("Enter the approx time to complete to coplete the work by a worker: ");
    scanf("%d %d", &s_t, &e_t);
    if (s_t >= 2 && e_t <= 3)
    {
        printf("Highly efficient");
    }
    else if (s_t >= 3 && e_t <= 4)
    {
        printf("The worker need to increase to increase the speed");
    }
    else if (s_t >= 4 && e_t <= 5)
    {
        printf("The worker have given training to improve speed");
    }
    else
    {
        printf("The worker need to leave the company");
    }
}