char    *ft_strcapitalize(char *str)
{
    int i;
    i = 0;

    while (str[i])
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            i += 32;
        }
        if (str[i] >= 97 && str[i] <= 122)
        {
            i -= 32;
        }
        i++;
    }
}