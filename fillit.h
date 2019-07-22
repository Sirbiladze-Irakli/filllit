/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <jormond-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 15:29:17 by jormond-          #+#    #+#             */
/*   Updated: 2019/07/17 19:05:18 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include "libft/libft.h"

# define EMPTY '.'
# define BLOCK '#'
# define ERROR1 "usage: ./fillit [file_name]\n"
# define ERROR2 "error\n"
# define OK 0

typedef struct      s_piece
{
    int             x;
    int             y;
    int             width;
    int             height;
    char            piece[21];
    char            letter;
    struct s_piece  *next;

}                   t_piece;


typedef struct      s_etris
{
    t_piece         *pieces;
    int             nb_of_pieces;
    int             size;
    char            **map;
}                   t_etris;

int		fillit(char *av);
void		ft_errors(char *s);

#endif