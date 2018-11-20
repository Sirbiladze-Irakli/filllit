/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:31:20 by jormond-          #+#    #+#             */
/*   Updated: 2018/11/20 15:22:27 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

char	*ft_sort(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] > str[j])
			{
				c = str[i];
				str[i] = str[j];
				str[j] = c;
			}
			j++;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		argv[i] = ft_sort(argv[i]);
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
