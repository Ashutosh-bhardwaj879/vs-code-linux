#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    for(int i =1;i<5;i++)
    {
        for(int j=i-1;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}