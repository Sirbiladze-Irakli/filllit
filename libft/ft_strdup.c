/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 14:15:52 by jormond-          #+#    #+#             */
/*   Updated: 2019/02/07 16:08:49 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char *copy;

	if (!(copy = (char *)malloc(ft_strlen(str) + 1)))
		return (NULL);
	ft_strcpy(copy, (char *)str);
	return (copy);
}
