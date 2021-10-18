#include<unistd.h>
void	ft_rev_params(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		write(1, &a[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int args, char *arg[])
{
	int	i;

	i = args - 1;
	while (i > 0)
	{
		ft_rev_params(arg[i]);
		i--;
	}
	return (0);
}
