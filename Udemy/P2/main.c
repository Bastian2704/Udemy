#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1, c2, c3;
    printf("Introducir 3 caracteres\n");
    scanf("%c %c %c",&c1,&c2,&c3);
    printf("Los caracteres son: %c--%c--%c",c1,c2,c3);
    return 0;
}