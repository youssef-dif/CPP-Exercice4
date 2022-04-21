#include<stdio.h>

int Fibonacci(int n)
{
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (Fibonacci(n-1) + Fibonacci(n-2));
    }
}

int main()
{
    int n, i = 0, c;

    printf("\nNumarul de valori care se vor calcula: ");
    scanf("%d",&n);
    while(n<1) {
       printf("\nNumarul de valori ale sirului trebuie sa fie mai mare decat 0. Alegeti numarul de valori: ");
       scanf("%d",&n);
    }

    printf("Sirul Fibonacci:\n");

    for ( i = 1 ; i <= n ; i++ ){
        if(i==n) {
            printf("%d", Fibonacci(i));
        } else {
            printf("%d, ", Fibonacci(i));
        }
    }

    return 0;
}

