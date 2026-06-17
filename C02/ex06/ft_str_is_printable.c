int ft_str_is_printable(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 35 && str[i] <= 126))
		{
			is_alpha = 0;
			break ;
		}
		i++;
	}
	return (is_alpha);
}
#include <stdio.h>
int main()
{
    char	str1[] = "~";
    printf("%s %d\n", str1, ft_str_is_printable(str1));
}