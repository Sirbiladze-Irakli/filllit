/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <jormond-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 15:25:17 by jormond-          #+#    #+#             */
/*   Updated: 2019/06/21 18:11:12 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fillit.h"

static char	**ft_parce(char *buf)
{
	int 	i;
	int		j;
	int		nl;
	char	parc[25][22];

	i = 0;
	j = 0;
	nl = 0;
	while(parc[i][j])
	{
		while(nl <= 4)
		{
			if (parc[i][j] == '\n')
				nl++;
			parc[i][j] = *buf++;
			j++;
			printf("%c", parc[i][j]);
		}
		printf("\n");
		nl = -1;
		i++;
	}
	return (parc);
}

static int  ft_is_valid2(char *buf, int i)
{
	int	sh;

	sh = 0;
	while (i > 21)
	{
        if (buf[i] == '#')
		{
			if (buf[i - 1] == '#')
				sh++;
			if (buf[i + 1] == '#')
				sh++;
			if (buf[i - 5] == '#')
				sh++;
			if (buf[i + 5] == '#')
				sh++;
		}
		i++;
		printf("%d\n", i);
	}
	if (buf[i] == '\0')
		return(OK);
	return ((sh % 6 == OK || sh % 8 == OK) ? OK : ERROR);
}

static int  ft_is_valid(char *buf)
{
	int     i;
	int     nl;
	int     sh;

	i = 0;
	nl = 0;
	sh = 0;
	while (buf[i])
	{
		if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n')
			return (ERROR);
		if (buf[i] == '#')
			sh++;
		if (sh > 4 && nl <= 4)
			return (ERROR);
		if (buf[i] == '\n')
			nl++;
		if (nl == 4)
		{
			if ((i % 21 + 1) % 5 != 0)
				return (ERROR);
			nl = -1;
			sh = 0;
		}
		i++;
	}
	return (ft_is_valid2(buf, i = 0));
}

// static char *ft_shift(char *str)
// {
//     int i;

//     i = 0;
// }

static char *ft_werewolf_letters(char *str)
{
	int i;
	int c;
	int nl;

	i = 0;
	c = 65;
	nl = 0;
	while (str[i])
	{
		if (str[i] == '#')
			str[i] = c;
		if (str[i] == '\n')
			nl++;
		if (nl == 4)
		{
			c++;
			nl = -1;
		}
		i++;
	}
	printf("%s", str);
	return (str);
}

static void ft_magic_sol(char *buf)
{
	char *str;

	str = buf;
	str = ft_werewolf_letters(str);
	// str = ft_shift(str);
}

int          main(int ac, char **av)
{
	int     fd;
	int     len;
	char    buf[MAX_VALID_BUF + 1];
	char	**parc;

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
	parc = ft_parce(buf);
	// if (ERROR == ft_is_valid(buf))
	// {
	// 	write(1, "error\n", 6);
	// 	return (0);
	// }
	// ft_magic_sol(buf);
	return (0);
}