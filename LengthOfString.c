#include <stdio.h>
#include <string.h>

int main()
{
    int count;
    char stringArray[101];
    scanf("%s", stringArray);
    // for ( i = 0; stringArray[i] != '\0'; i++)
    // {
    //     /* code */
    //     count++;
    // }

    count = strlen(stringArray);

    printf("%d", count);

    return 0;
}