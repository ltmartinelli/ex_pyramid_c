#include <stdio.h>

int main(void)
{

    int n;

    while (1)
    {
        printf("Height: \n");
        scanf("%d", &n);

        if (n >= 1 && n <= 8)
        {
            break;
        }
        else
        {
            printf("Between 1 and 8 please.\n");
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n-i-2; j++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("  ");
        
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;    
}