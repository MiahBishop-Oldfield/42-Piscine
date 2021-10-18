int	char_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (char_is_lower(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int	main(void)
{
	char a[] = "Hello";
	char b[] = "hello";
	
	ft_strupcase(a);
	ft_strupcase(b);
	printf("Hello: %s\n", a);
	printf("hello: %s\n", b);
}
*/
