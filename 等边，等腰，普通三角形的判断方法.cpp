#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c && a != 0 && b != 0 && c != 0)
        printf("yes\n");
    else
        printf("no\n");
    if ((a + b > c && a + c > b && b + c > a) && (a == b || a == c || b == c))
        printf("yes\n");
    else
        printf("no\n");
    if (a + b > c && a + c > b && b + c > a)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}