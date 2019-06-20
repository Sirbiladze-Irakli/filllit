/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 14:11:54 by jormond-          #+#    #+#             */
/*   Updated: 2019/02/07 16:05:28 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char *arr1;

	arr1 = (char *)arr;
	if (n != 0)
	{
		while (n--)
		{
			if (*arr1 == (char)c)
				return ((void *)arr1);
			arr1++;
		}
	}
	return (NULL);
}
