void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		write(1, &str[a], 1);
		a++;
	}
}

/*
#include <unistd.h>
int	main(void)
{
	ft_putstr("Hello World");
}
*/
