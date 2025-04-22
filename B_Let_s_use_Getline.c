#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int i = 0;
    int lengthArray = 1000001;
    int nread;
    char stringArray[lengthArray];

    // fgetc(stringArray, 1000001, stdin);
    // getline(&stringArray, 1000001, stdin);
    nread = getline(&stringArray, &lengthArray, stdin);

    // for ( i = 0; stringArray[i] != "'\'"; i++)
    // {
    //     /* code */
    //     printf("%s", stringArray);
    // }

    printf("%s %d", stringArray, nread);

    return 0;
}