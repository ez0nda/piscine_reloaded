int		ft_sqrt(int nb)
{
	long sqrt;
	long res;

	if (nb % 2 == 0)
		sqrt = 2;
	else
		sqrt = 1;
	while (sqrt <= nb / 2)
	{
		res = sqrt * sqrt;
		if (res == nb)
			return (sqrt);
		else
			sqrt = sqrt + 2;
	}
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	return (0);
}
