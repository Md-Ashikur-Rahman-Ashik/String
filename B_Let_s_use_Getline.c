#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;

    char stringArray[1000001];
    fgets(stringArray, 1000001, stdin);

    for ( i = 0; stringArray[i] != '\\'; i++)
    {
        /* code */
        printf("%c", stringArray[i]);
    }

    // printf("\\");
    

    return 0;
}