/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:31:20 by jormond-          #+#    #+#             */
/*   Updated: 2018/11/21 19:02:46 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print_params(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
		ft_putstr(av[i++]);
}

int		main(int argc, char **argv)
{
	int		i;
	char	*tmp;
	int		sort;

	sort = 1;
	while (sort)
	{
		sort = 0;
		i = 1;
		while (i < argc)
		{
			if (!(argv[i + 1]))
				break ;
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				sort = 1;
			}
			i++;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
