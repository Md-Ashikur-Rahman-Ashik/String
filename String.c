#include <stdio.h>

int main()
{
    int i, j;
    char arr[5];

    for (i = 0; i < 5; i++)
    {
        /* code */
        scanf("%c", &arr[i]);
    }

    for (j = 0; j < 5; j++)
    {
        /* code */
        printf("%c", arr[j]);
    }

    return 0;
}