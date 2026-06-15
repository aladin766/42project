char    *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;

    while (src[i] != 0)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}
#include <stdio.h>
int main()
{
    char src[8] = "yoooooo";
    char dest[8] = "salut";

    ft_strcpy(dest, src);
    printf("src = %s, dest = %s", src, dest);
    return(0);
}