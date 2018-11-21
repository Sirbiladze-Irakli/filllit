/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 09:24:41 by jormond-          #+#    #+#             */
/*   Updated: 2018/11/20 15:16:22 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = nb;
	if (nb == 0)
		return (1);
	else if (nb > 0 && nb < 14)
	{
		while (nb > 1)
		{
			res = res * (nb - 1);
			nb--;
		}
	}
	else
		return (0);
	return (res);
}
