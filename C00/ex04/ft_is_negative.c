#include <unistd.h>

void ft_is_negative(int n)
{
    int i;
    i = 0;
    if (n >= i)
    {
        write(1, "P", 1);
    }
    else
    {
        write(1, "N", 1);
    }
}

int main ()
{
    int n;
    n = -3;
    ft_is_negative(n);
    return(0);
}