char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
#include <stdio.h>
int	main(void)
{
	char	src[] = "Hello World";
	char	dest[4];

	printf("Destination Before: %s\n", dest);
	printf("Source Before: %s\n", src);
	ft_strncpy(dest, src, 3);
	printf("Destination After: %s\n", dest);
	printf("Source After: %s\n", src);
}
