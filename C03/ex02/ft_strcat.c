char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;

    while(dest[i] != '\0')
    {
        i++;
    }
    while(src[j] != '\0')
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
    printf("'%s'", ft_strcat(s1, s2));
    return(0);
}