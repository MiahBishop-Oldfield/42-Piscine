char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello World";
	char	dest[12];
	printf("Destination Before: %s\n", dest);
	ft_strcpy(dest, src);
	printf("Source After: %s\n", src);

	return (0);
}
*/
