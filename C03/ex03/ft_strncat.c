char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < nb && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char a[20] = "Hello ";
	char b[20] = "World";

	char *t = ft_strncat(a, b, 6);
	printf("%s\n", t);
	return (0);
}
*/
