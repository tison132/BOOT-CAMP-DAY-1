/*
Name : Kavin J
Date : 05.05.2022
Question : Add one to each digit of the given number
*/
#include <stdio.h>
int main()
{
    int n = 0;
    int ans = 0;
    int add_one = 0;
    printf("Enter a number : \n");
    scanf("%d", &n);
    int count = 0;
    while (n != 0)
    {
        int rem = n % 10 + 1;
        if (rem > 9)
        {
            ans = ans * 10 + rem % 10;
        }
        else
        {
            ans = ans * 10 + rem;
        }
        n = n / 10;
        count++;
    }
    while (count != 0)
    {
        if (ans != 0)
        {
            int rem = ans % 10;
            ans = ans / 10;
            add_one = add_one * 10 + rem;
        }
        else
        {
            add_one *= 10;
        }
        count--;
    }

    printf("%d", add_one);
}