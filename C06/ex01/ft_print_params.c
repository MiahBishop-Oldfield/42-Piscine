#include<unistd.h>
int	main(int ac, char **av)
{
	int	a;
	int	b;

	a = 1;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			write(1, &av[a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
