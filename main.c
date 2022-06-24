#include <stdio.h>
#include <stdlib.h>

static int	tmp[1000];

int	check_err(int n)
{
	if (n < 0)
		return (1);
	else if (n == 1)
	{
		printf("%d\n", n);
		return (1);
	}
	return (0);
}

void	print_formula(int n)
{
	int	a;

	a = 0;
	printf("%d = ", n);
	for (int a = 0; a < c; a++)
	{
		printf("%d", tmp[a]);
		if (c != a + 1)
			printf(" * ");
	}
	printf("\n");
}

int	solve(int n)
{
	int	i;
	int	c;

	i = 2;
	c = 0;
	while (i <= n)
	{
		if (n % i == 0)
		{
			tmp[c] = i;
			n = n / i;
			i = 1;
			c++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	if (check_err(atoi(argv[1])))
		return (0);
	solve(atoi(argv[1]));

	return (0);
}
