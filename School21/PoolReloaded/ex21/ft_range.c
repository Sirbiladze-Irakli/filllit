/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 12:33:04 by jormond-          #+#    #+#             */
/*   Updated: 2018/11/20 15:33:07 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*str;
	int	i;

	if (min >= max || min < -2147483647
			|| max > 2147483647)
		return (NULL);
	if (!(str = (int *)malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = 0;
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
