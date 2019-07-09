/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <jormond-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 15:25:17 by jormond-          #+#    #+#             */
/*   Updated: 2019/07/09 15:36:14 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fillit.h"

static char **ft_parce_arr(char *buf)
{
	int		i;
	int		j;
	int		k;
	int		count;
	char parce[25][21];

	i = 0;
	j = 0;
	k = 0;
	while(buf[i])
	{
		count = 0;
		while(count <= 20)
		{
			parce[j][k] = buf[i];
			k++;
			i++;
			count++;
			printf("%c", parce[j][k]);
		}
		parce[j][k] = '\0';
		printf("%c\n\n", parce[j][k]);
		j++;
	}
	return (parce);
}

static int  ft_is_valid2(char *buf)
{
	int i;
	int count;
	int	sh;

	i = 0;
	while (buf[i])
	{
		count = 0;
		sh = 0;
		while (count <= 20)
		{
			if (buf[i] == '\0')
				break ;
			if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n')
				return (ERROR);
        	if (buf[i] == '#')
			{
				if (buf[i - 1] == '#')
					sh++;
				if (buf[i + 1] == '#')
					sh++;
				if (buf[i - 5] == '#' && (count - 5) >= 0)
					sh++;
				if (buf[i + 5] == '#' && (count + 5) < 21)
					sh++;
			}
			printf("%d", sh);
			printf("%c", buf[i]);
			count++;
			i++;
		}
		printf("iter\n");
		if (sh != 6 && sh != 8)
			return (ERROR);
	}
	return (OK);
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
	return (ft_is_valid2(buf));
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
	char parce[25][21];

	str = buf;
	str = ft_werewolf_letters(str);
	ft_parce_arr(buf);
	// str = ft_shift(str);
}

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
