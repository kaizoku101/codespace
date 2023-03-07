#include<cs50.h>
#include<stdio.h>

int main (void)
{
    int numbers [] = {20,45,59,70,100,101,90};
    int n = get_int("number");
    for(int i=0 ; i<7; i++)
    {
        if(numbers[i]==n)
        {
            printf("number found");
            return 0;
        }

        }
        printf("not found");
        return 1;
    }
}