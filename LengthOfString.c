#include <stdio.h>

int main()
{
    int i, count = 0;
    char stringArray[101];
    scanf("%s", stringArray);
    for ( i = 0; stringArray[i] != '\0'; i++)
    {
        /* code */
        count++;
    }
    
    printf("%d", count);

    return 0;
}