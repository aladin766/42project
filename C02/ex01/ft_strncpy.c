char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[] = "Hello World ! ";
	char str2[50] = "I am Mouhemed";
	ft_strncpy(str2, str1, 50);
	printf("%s\n", str2);
}