void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>
int	main (void)
{
	int	var;

	var = 100;

	int	*a;
	int	**b;
	int	***c;
	int	****d;
	int	*****e;
	int	******f;
	int	*******g;
	int ********h;
	int	*********i;
	a = &var;
	b = &a;
	c = &b;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;
	printf("Before: %d\n", var);
	ft_ultimate_ft(i);
	printf("After: %d\n", var);
	return (0);
}
