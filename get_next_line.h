/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msukhare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 09:20:18 by msukhare          #+#    #+#             */
/*   Updated: 2017/11/27 10:43:54 by msukhare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 50
# include "libft/includes/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_gnl
{
	int				index;
	int				file;
	char			*p_line;
	struct s_gnl	*next;
}					t_gnl;
int					get_next_line(const int fd, char **line);
#endif
