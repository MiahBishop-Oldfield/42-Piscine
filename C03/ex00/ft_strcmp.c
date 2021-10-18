int	ft_strcmp(char	*s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
		x++;
	return (s1[x] - s2[x]);
}
/*
#include <stdio.h>
int	main(void)
{
	char str1[] = "Hello";
	char str2[] = "hello";
	
	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}
*/
