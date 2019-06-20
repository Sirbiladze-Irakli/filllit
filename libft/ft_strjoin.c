/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 14:17:41 by jormond-          #+#    #+#             */
/*   Updated: 2019/02/07 15:27:00 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	n;

	dest = NULL;
	if (s1 && s2)
	{
		n = ft_strlen(s1) + ft_strlen(s2);
		dest = (char *)malloc(n + 1);
		if (dest)
		{
			ft_strcpy(dest, (char *)s1);
			ft_strcat(dest, s2);
		}
	}
	return (dest);
}
