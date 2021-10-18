int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] == '\0')
		{
			return (1);
		}
		if (str[i] < 'A' || str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a'))
		{
			 return (0);
		}
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main(void)
{
	char	str1[2] = {};
	char	str2[6] = {"z"};
	char	str3[6] = {"He11o"};
	
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	printf("%d\n", ft_str_is_alpha(str3));
}
*/
