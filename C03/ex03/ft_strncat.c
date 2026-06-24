char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;
    i = 0;
    j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && j < nb)
    {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return(dest);
}

#include <string.h>
#include <stdio.h>
int main()
{
    char s1[100] = "Hello ";
    char s2[] = "World";
    int nb = 4;
    printf("'%s'", ft_strncat(s1, s2, nb));
    return(0);
}