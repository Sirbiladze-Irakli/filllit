/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormond- <jormond-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 15:29:17 by jormond-          #+#    #+#             */
/*   Updated: 2019/07/09 12:19:00 by jormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include "libft/libft.h"

# define MAX_VALID_BUF 545
# define ERROR -1
# define OK 0

typedef struct  s_square
{
    int         size;
    char        **map;
}               t_square;

#endif