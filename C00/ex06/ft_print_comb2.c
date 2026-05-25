#include <unistd.h>

void ft_print_comb2()
{
    int a = 00;
    int b = 01;

    char c = '0';
    char e = ',';
    char f = ' ';
    while(a <= 98)
    {
        while(b <= 99)
        {
            c = '0' + (a / 10);
            write (1, &c, 1);
            c = '0' + (a % 10);
            write (1, &c, 1);
            write (1, &f, 1);
            c = '0' + (b / 10);
            write (1, &c, 1);
            c = '0' + (b % 10);
            write (1, &c, 1);

            if (a == 98 && b == 99)
            {
            }
            else 
            {
                write(1, &e, 1);
                write(1, &f, 1);
            }
            b++;
        }
        a++;
        
        b = a + 1;
        a = b - 1;
    }
}

int main()
{
    ft_print_comb2();
    return(0);
}