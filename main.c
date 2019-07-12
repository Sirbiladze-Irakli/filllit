/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <jormond-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 17:49:09 by jormond-          #+#    #+#             */
/*   Updated: 2019/07/12 17:49:30 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int          main(int ac, char **av)
{
	int     fd;
	int     len;
	char    buf[MAX_VALID_BUF + 1];
	// char	**parc;

	if (ac != 2)
	{
		write(1, "error\n", 6);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if ((len = read(fd, buf, 546)) > MAX_VALID_BUF)
	{
		write(1, "error\n", 6);
		return (0);
	}
	buf[len] = '\0';
	// parc = ft_parce(buf);
	if (ft_is_valid(buf) == ERROR)
	{
		write(1, "error\n", 6);
		return (0);
	}
	ft_magic_sol(buf);
	return (0);
}