#include <stdio.h>

int main(void)
{
    char name[12];

    printf("What is your name? ");
    scanf("%s", &name);

    printf("hello, %s\n", name);
}