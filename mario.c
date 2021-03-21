#include<cs50.h>
#include<stdio.h>
void pattern (int);

int main(void)
{
    start:
    printf("Height: ");
    int height = get_int();
    if( (height>=0) && (height<24) )
    {
        pattern(height);
    }
    else
    {
        goto start;
    }
}

void pattern (int a)
{
    int i,j,k;
   
        for(i=1;i<=a; i++)
     {
        for(j=a;j>i;j--)
        
                printf(" ");
        for(k=0;k<i+1;k++)
            printf("#");
            printf("\n");
     }
}
