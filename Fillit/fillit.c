/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 15:25:17 by jormond-          #+#    #+#             */
/*   Updated: 2019/06/17 15:25:19 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "fillit.h"

static int  ft_is_valid2(char *buf)
{
    int i;

    i = 0;
    while (buf[i])
    {
        if (buf[i] != '.' || buf[i] != '#' || buf[i] != '\n')
            return (-1);
        if (buf[i] == '#')
        {
            if (buf[i] != buf[i - 1] || buf[i] != buf[i + 1] ||
                buf[i] != buf[i - 5] || buf[i] != buf[i + 5])
                return (-1);
        }
        i++;
    }
    return (0);
}

static int  ft_is_valid(char *buf)
{
    int     i;
    int     nl;
    int     sh;

    sh = nl = i = 0;
    while (buf[i])
    {
        if (buf[i] == '#')
            sh++;
        if (sh > 4 && nl <= 4)
            return (-1);
        if (buf[i] == '\n')
            nl++;
        if (nl == 4)
        {
            if ((i % 21 + 1) % 5 != 0)
                return (-1);
            nl = -1;
            sh = 0;
        }
        i++;
    }
    return (ft_is_valid2(buf));
}

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
}

int         main(int ac, char **av)
{
    int     fd;
    int     len;
    char    buf[MAX_VALID_BUF + 1];

    if (ac != 2)
    {
        write(1, "error\n", 6);
        return (0);
    }
    fd = open(av[1], O_RDONLY);
    if (!(len = read(fd, buf, MAX_VALID_BUF)))
    {
        write(1, "error\n", 6);
        return (0);
    }
    buf[len] = '\0';
    if (ERROR == ft_is_valid(buf))
    {
        write(1, "error\n", 6);
        return (0);
    }
    ft_magic_sol(buf);
    return (0);
}