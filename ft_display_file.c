/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezonda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:01:31 by ezonda            #+#    #+#             */
/*   Updated: 2018/11/07 10:40:51 by ezonda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	display_file(int fd)
{
	char buffer[4096];

	while (read(fd, buffer, 1) != 0)
		ft_putstr(buffer);
}

int		main(int ac, char **av)
{
	int fd;

	if (ac != 2)
	{
		if (ac < 2)
			write(2, "File name missing.\n", 19);
		if (ac > 2)
			write(2, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	display_file(fd);
	return (0);
}
