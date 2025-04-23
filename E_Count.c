#include <stdio.h>
#include <string.h>

int main()
{
    // char num = '0';
    int i, count = 0;
    // long long int i = 0;

    char stringArray[1000000];

    scanf("%s", stringArray);

    long long int num = strlen(stringArray);

    for (i = 0; i < num; i++)
    {
        /* code */
        count = count + stringArray[i] - 48;
    }

    printf("%d", count);

    // printf("%lld", strlen(stringArray));

    return 0;
}