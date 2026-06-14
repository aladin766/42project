void    ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;
    div = *a / *b;
    mod = *a % *b;

    *a = div;
    *b = mod;
}

#include <stdio.h>

int main()
{
    int a = 42;
    int b = 4;

    ft_ultimate_div_mod(&a, &b);
    printf("a = %d, b = %d", a, b);
    return(0);
}