#include <stdio.h>

int main()
{
    char a[50];

    fgets(a, 21, stdin);

    printf("%s", a);

    return 0;
}