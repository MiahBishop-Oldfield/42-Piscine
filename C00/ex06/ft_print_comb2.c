#include <unistd.h>

void	ft_put2char(int a, int b)
{
	int	left;
	int	right;

	left = (a / 10) + '0';
	right = (a % 10) + '0';
	write(1, &left, 1);
	write(1, &right, 1);
	write(1, " ", 1);
	left = (b / 10) + '0';
	right = (b % 10 ) + '0';
	write(1, &left, 1);
	write(1, &right, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_put2char(a, b);
			write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
