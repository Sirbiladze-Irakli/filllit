/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 09:47:05 by jormond-          #+#    #+#             */
/*   Updated: 2018/11/20 15:18:43 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb < 14)
	{
		if (nb > 1)
			return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
	return (nb);
}
