/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 14:19:53 by jormond-          #+#    #+#             */
/*   Updated: 2019/01/07 21:57:11 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;
	int n;

	i = 0;
	j = 0;
	n = 0;
	while (to_find[n] != '\0')
		n++;
	if (n == 0)
		return ((char *)str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == n - 1)
				return ((char *)str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
