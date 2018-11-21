/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 18:47:44 by jormond-          #+#    #+#             */
/*   Updated: 2018/11/21 18:51:34 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "f.h"

#define BUF_SIZE 4096

int		main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	if (ac == 1)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
		return (1);
	return (0);
}
