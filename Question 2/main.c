#include <stdio.h>

int main()
{
    char gender;

    printf("Input gender m or f: ");
    scanf("%c",&gender);

    switch(gender)
    {
        case 'm':
            printf("Male");
            break;

        case 'f':
            printf("Female");
            break;

        default:
            printf("Unknown Gender.");
    }
    return 0;
}
