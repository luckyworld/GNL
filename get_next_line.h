/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvillat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/24 15:08:33 by gvillat           #+#    #+#             */
/*   Updated: 2016/01/24 16:08:19 by gvillat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 21
# include <unistd.h>
# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>

int		get_next_line(int const fd, char ** line);

#endif
