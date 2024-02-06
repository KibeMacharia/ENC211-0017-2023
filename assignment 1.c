#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("5:");
    scanf("5d", &a);
    printf("10:");
    scanf("%d", &b);
    c = a + b;
    printf("%d + %d\n" , a, b, c);
    return 0;
}
