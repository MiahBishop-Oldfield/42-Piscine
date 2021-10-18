int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strlen("Hello World"));
	return (0);
}
