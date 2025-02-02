/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 14:18:04 by jormond-          #+#    #+#             */
/*   Updated: 2019/02/07 17:26:24 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	size_t	i;
	size_t	j;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	if (!(fresh = (char *)malloc(i + 1)))
		return (NULL);
	j = 0;
	while (j < i)
	{
		fresh[j] = f(s[j]);
		j++;
	}
	fresh[j] = '\0';
	return (fresh);
}
