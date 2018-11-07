/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:51:47 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/07 11:55:17 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int temp;

	i = 0;
	temp = nb;
	if ((nb < 0) || (nb >= 13))
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
