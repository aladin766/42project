char    *ft_strlowcase(char *str)
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
    }
    return(str);
}
#include <stdio.h>
int main()
{
    char    str[] = "ABcddDd";
	printf("\"%s\"\n", ft_strlowcase(str));
    return(0);
}