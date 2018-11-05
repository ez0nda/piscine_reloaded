int		ft_iterative_factorial(int nb)
{
	int i;
	int temp;

	i = 0;
	temp = nb;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			i++;
			nb = nb * (temp - i);
			if ((temp - i) == 1)
				return (nb);
		}
	}
	if (nb == 0)
		return (1);
	return (nb);
}
