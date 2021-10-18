int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	n = nb;
	i = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			n = n * nb;
			i++;
		}
	}
	return (n);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_power(-1, -1));
}
*/
