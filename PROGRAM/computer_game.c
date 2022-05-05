/*
Name: Kavin J
Date: 05.05.2022
Question : computer game
*/
#include <stdio.h>
int main()
{
    int match_sticks = 0;
    int cur_count = 0;
    int tot_mathes = 21;
    while (cur_count <= 21)
    {

        printf("------------------------------------------\n");
        printf("Take 1 or 2 or 3 or 4 match sticks \n");
        printf("remaining match sticks %d\n", tot_mathes - cur_count);
        scanf("%d", &match_sticks);
        cur_count = cur_count + match_sticks + 5 - match_sticks;
        
        if (cur_count<21)
        {
            printf("computer turn,computer takes %d\n", 5 - match_sticks);
        }
        printf("------------------------------------------\n");
    }
    printf("Computer wins you loss to the computer");
}