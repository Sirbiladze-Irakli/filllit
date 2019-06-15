/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 14:12:37 by jormond-          #+#    #+#             */
/*   Updated: 2019/02/07 15:50:42 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int c, size_t n)
{
	char *arr1;

	if (n == 0)
		return (arr);
	arr1 = (char *)arr;
	while (n--)
		*arr1++ = (char)c;
	return (arr);
}
