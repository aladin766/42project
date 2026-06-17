int ft_str_is_numeric(char *str)
{
	int	i;
	int	is_num;

	i = 0;
	is_num = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			is_num = 0;
			break ;
		}
		i++;
	}
	return (is_num);
}
#include <stdio.h>
int main()
{
    char	str1[] = "1";
    printf("%s %d\n", str1, ft_str_is_numeric(str1));
}