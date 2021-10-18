int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

/*
#include <stdio.h>
int	main(void)
{
	int	len;
	char	*str = "Hello";

	len = ft_strlen(str);
	printf("Length of s: %s, is %d", str, len);
}
*/
