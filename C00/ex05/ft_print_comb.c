#include <unistd.h>

void ft_print_comb(void)
{
    int a = '0';
    int b = '1';
    int c = '2';

    int e = ',';
    int f = ' ';
    while (a <= '7')
    {
        while (b <= '8')
        {
            while (c <= '9')
            {
                write(1, &a, 1);
                write(1, &b, 1);
                write(1, &c, 1);
                if (a == '7' && b == '8' && c == '9')
                {
                }
                else {
                    write(1, &e, 1);
                    write(1, &f, 1);
                }
                c++;
            }
            c = '2';
            c += 1;
            b++;
        }
        b = '1';
        b += 1;
        a++;
    }
}

int main (void)
{
    ft_print_comb();
    return(0);
}