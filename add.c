#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter number a: \n");
    scanf("%d", &a);

    printf("Enter number b: \n");
    scanf("%d", &b);

    printf("The sum is: %d\n", a+b);
    printf("The sub is: %d\n", a-b);
    printf("The pro is: %d\n", a*b);
    printf("The div is: %d\n", a/b);
    printf("The mod is: %d\n", a%b);
    printf("The pow is: %d\n", a^b);
    return 0;
}
