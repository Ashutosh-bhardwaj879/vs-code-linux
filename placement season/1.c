#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int n;
    //scanf("%d",&n);
    for (int i = 1; i < 4; i++)
    {
        for (int j = i-1; j < 4; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}