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

static int  ft_is_valid(char *buf, int len)
{
    int     i;

    i = 0;
    while (buf[i])
    {
        if (buf[i] != '.' && buf[i] != '#' && buf[i] != '\n')
        {
            printf ("Poh!");
            return (0);
        }
        else if (!(i % 21 + 1) % 5)
        {
            printf ("Doh!");
            return (0);
        }
        printf("%c\n", buf[i]);
        i++;
    }
    return (1);
}

int         main(int ac, char **av)
{
    int     fd;
    int     len;
    char    buf[MAX_VALID_BUF + 1];

    if (ac != 2)
        return (0);
    fd = open(av[1], O_RDONLY);
    if (!(len = read(fd, buf, MAX_VALID_BUF)))
        return (0);
    printf("%s\n", buf);
    if (ERROR == ft_is_valid(buf, len))
    {
        return (0);
    }
}