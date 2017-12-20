/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 03:10:20 by amehmeto          #+#    #+#             */
/*   Updated: 2017/12/20 04:45:51 by amehmeto         ###   ########.fr       */
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
	struct dirent	*elem;
	char			*path;
	struct s_file	*next;
}					t_file;

t_file	*lst_create(struct dirent *file, char *path, t_file *prev);

#endif
