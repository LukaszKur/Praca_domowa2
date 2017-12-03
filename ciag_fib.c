//
// Created by lukasz on 03.12.17.
//
#include<stdio.h>

void fibonacci(int n)
{
    long int a = 0, b = 1;

    for(int i=0;i<n;i++)
    {
        printf("%li ",b);
        b += a; //pod zmienną b przypisujemy wyraz następny czyli a+b
        a = b-a; //pod zmienną a przypisujemy wartość zmiennej b
    }
}

int main()
{
    int n;

    printf("Podaj ile chcesz wypisać wyrazów ciągu fibonacciego: \n");
    scanf("%i",&n);

    fibonacci(n);
    return 0;
}
