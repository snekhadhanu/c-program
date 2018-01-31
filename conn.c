#include <stdio.h>
int main()
{
    char a[100], b[100], i, j;
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    for(i = 0; a[i] != '\0'; ++i);
    for(j = 0; b[j] != '\0'; ++j, ++i)
    {
        a[i] = b[j];
    }
    a[i] = '\0';
    printf("After concatenation: %s", a);
    return 0;
}
