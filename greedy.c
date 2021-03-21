#include<stdio.h>
#include<cs50.h>

int main (void)

{
    start:
    printf("O hai! How much change is owed?\n");
    float amount1 = get_float();
    int amount=(((amount1-(int)amount1)*101))+(int)amount1*100;
    int coins=0;
    if(amount>0)
    {
        coins = amount/25 + (amount%25)/10 + ((amount%25)%10)/5 + ((amount%25)%10)%5 ;
        printf("%d\n",coins);
    }
    else
    {
        goto start;
    }
}