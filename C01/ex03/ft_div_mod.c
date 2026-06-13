#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int a = 25;
    int b = 2;
    int rez;
    int rest;

    ft_div_mod(a, b, &rez, &rest);
    printf("rez = %d, rest = %d", rez, rest);
    return(0);
}