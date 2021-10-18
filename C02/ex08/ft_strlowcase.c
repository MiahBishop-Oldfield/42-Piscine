int	char_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (char_is_upper(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char a[] = "Hello";
	char b[] = "HELLO";

	ft_strlowcase(a);
	ft_strlowcase(b);
	printf("Hello: %s\n", a);
	printf("HELLO: %s\n", b);
}
*/
