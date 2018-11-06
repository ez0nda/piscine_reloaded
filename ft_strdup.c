/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 10:38:52 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/06 11:37:30 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		n;
	char	*dest;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	if (!(dest = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
