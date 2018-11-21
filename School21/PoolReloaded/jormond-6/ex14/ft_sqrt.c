/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:00:24 by jormond-          #+#    #+#             */
/*   Updated: 2018/11/20 10:17:39 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 2;
	while (i * i <= nb && i < 46431)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
