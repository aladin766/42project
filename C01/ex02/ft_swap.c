#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *b;
    *b = swap;
}

int main()
{
    int x = 42;
    int y = 60;

    ft_swap(&x, &y);
    printf("x = %d, y = %d", x, y);
    return(0);
}