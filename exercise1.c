#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number you want multiplication table of: \n"); 
    scanf("%d", &n);
    printf("Output: \n");
    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", n, i, n*i, "\n");
    }
    return 0;
}

