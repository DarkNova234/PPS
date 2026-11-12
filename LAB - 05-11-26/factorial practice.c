#include <stdio.h>
int factorail(int n)
{
    if (n == 0 || n == 1)
    return 1;

    else
    return n * factorail(n-1);
}
int main()
{
    int n, result;
    printf("Enter value for n factorial: ");
    scanf("%d", &n);
    
    result = factorail(n);

    printf("Factorial of %d is %d",n ,result);
    return 0;
}