/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 03:10:20 by amehmeto          #+#    #+#             */
/*   Updated: 2017/12/22 05:53:31 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "../../Libft/libft.h"
# include <dirent.h>


# include <stdio.h>
# include <stdlib.h>

typedef struct		s_file
{
	struct s_file	*prev;
	char			*name;
	int				type;
	char			*path;
	struct s_file	*next;
}					t_file;

t_file	*lst_create(char *name, char *path, t_file *prev);

#endif
