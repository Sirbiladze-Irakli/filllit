/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 14:19:15 by jormond-          #+#    #+#             */
/*   Updated: 2019/02/07 16:18:41 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (i < n && str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0')
		{
			if (i + j >= n || str[i + j] != to_find[j])
				break ;
			j++;
		}
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}
