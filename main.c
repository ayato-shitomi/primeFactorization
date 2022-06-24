#include <stdio.h>
#include <stdlib.h>

int	check_err(int n)
{
	if (n <= 0)
	{
		printf("number must be bigger than 0 and smaller than INT_MAX\n");
		return (1);
	}
	else if (n == 1)
	{
		printf("%d\n", n);
		return (1);
	}
	return (0);
}

void	print_formula(int number, int index_max, int tmp[1000])
{
	int	a;

	a = 0;
	printf("%d = ", number);
	while (a < index_max)
	{
		printf("%d", tmp[a]);
		if (index_max != a + 1)
			printf(" * ");
		a++;
	}
	printf("\n");
}

int	solve(int n)
{
	int	i;
	int	tmp[1000];
	int	index;
	int	num_tmp;

	i = 2;
	index = 0;
	num_tmp = n;
	while (i <= n)
	{
		if (n % i == 0)
		{
			tmp[index] = i;
			n = n / i;
			i = 1;
			index++;
		}
		i++;
	}
	print_formula(num_tmp, index, tmp);
	return (0);
}

int	main(int argc, char **argv)
{
	int	num;
	if (argc != 2)
	{
		printf("only one number as argument.\n");
		return (0);
	}
	num = atoi(argv[1]);
	if (check_err(num))
		return (0);
	solve(num);
	return (0);
}
