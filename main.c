/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <jormond-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 15:36:38 by jormond-          #+#    #+#             */
/*   Updated: 2019/07/17 16:13:05 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_errors(char *s)
{
	if (ERROR1)
		ft_putstr(ERROR1);
	else if (ERROR2)
		ft_putstr(ERROR2);
	exit(1);
}

int			main(int ac, char **av)
{
	int i;

	if (ac == 1)
		ft_errors(ERROR1);
	else if (ac == 2)
	{
		// if (!(av[1]))
		// 	ft_putstr(ERROR2);
		i = fillit(av[1]);
		return (i);
	}
	else
		ft_putstr(ERROR2);
	return (0);
}