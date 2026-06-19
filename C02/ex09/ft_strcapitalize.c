char    *ft_strcapitalize(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        i++;
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
        i++;
    }
    return(str);
}
#include <stdio.h>
int main()
{
    char str[] = "HelIO";
    printf("\"%s\"", ft_strcapitalize(str));
    return(0);
}