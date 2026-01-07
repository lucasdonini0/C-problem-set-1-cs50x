#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        printf("Height: ");
        if (scanf("%d", &height) == 0)
        {
            while (getchar() != '\n');
            height = -1;
        }
    } 
    while (height <= 0 || height > 219);

    const int n = height;
    for (int i = 0; i < n; i++)
    {
        for (int j = -1; j < i; j++)
        {
            printf("#");
        }
    printf("\n");
    }
}