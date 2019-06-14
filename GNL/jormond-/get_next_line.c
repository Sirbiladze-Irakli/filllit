/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 11:31:28 by jormond-          #+#    #+#             */
/*   Updated: 2019/06/06 13:26:18 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static t_list	*ft_search_node(t_list **list, int fd)
{
	t_list	*tmp;

	tmp = *list;
	if (*list == NULL)
	{
		*list = ft_lstnew(NULL, 0);
		(*list)->content_size = fd;
		return (*list);
	}
	while (tmp)
	{
		if (tmp->content_size == (size_t)fd)
			return (tmp);
		if (tmp->next == NULL)
		{
			tmp->next = ft_lstnew(NULL, 0);
			tmp->next->content_size = fd;
			return (tmp->next);
		}
		tmp = tmp->next;
	}
	return (NULL);
}

static char		*ft_cut_line(char **s)
{
	char	*str;
	int		i;
	char	*tmp;

	tmp = *s;
	i = 0;
	while(tmp[i] != '\n' && tmp[i] != '\0')
		i++;
	str = ft_strsub(tmp, 0, i);
	if (ft_strchr(tmp, '\n'))
		tmp = ft_strdup((ft_strchr(tmp, '\n') + 1));
	else
		tmp = ft_strdup("\0");
	// free(*s);
	// *s = tmp;
	// free(tmp);
	return(str);
}

// static void		ft_join_free(char **content, char *buf)
// {
// 	char	*tmp;

// 	tmp = *content;
// 	// printf("cont + buf->%s%s", *content, buf);
// 	//printf("asd\n");
// 	tmp = ft_strjoin(*content, buf);
// 	free(*content);
// 	*content = tmp;
// 	// printf("cont == [%s]\n", *content);
// }

int 			get_next_line(const int fd, char **line)
{
	static t_list	*list;
	char			buf[BUFF_SIZE + 1];
	int				ret;
	t_list			*tmp; 

	if (fd < 0 || line == NULL || BUFF_SIZE <= 0 ||
	(tmp = ft_search_node(&list, fd)) == NULL)
		return (-1);
	// printf("tmp->cont->%s\n", tmp->content);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret < 0)
			return (-1);
		buf[ret] = '\0';
		(!(tmp->content)) ? tmp->content = ft_strdup(buf) :
			(tmp->content = ft_strjoin(tmp->content, buf));
		if (ft_strchr(buf, '\n'))
			break ;
	}
	if (ret == 0 && ((tmp->content == NULL) || ft_strlen(tmp->content) == 0))
		return (0);
	if (ft_strchr(tmp->content, '\n'))
		list = ft_strdup((ft_strchr(tmp->content, '\n') + 1));
	*line = ft_cut_line((char **)&(tmp->content));
	return(1);
} 