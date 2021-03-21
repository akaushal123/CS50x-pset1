#include <stdio.h>
#include<cs50.h>
int main(void)
{
    start:
    printf("Minutes: ");
    int minutes= get_int();
    int bottles=0;
    if(minutes >= 0)
    {
        bottles= minutes*12;
    }
    else
    {
        goto start;
    }

     printf("Bottles: %i\n", bottles);
}