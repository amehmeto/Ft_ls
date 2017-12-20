/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_crud.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 04:08:57 by amehmeto          #+#    #+#             */
/*   Updated: 2017/12/20 05:32:31 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_file		*lst_create(struct dirent *file, char *path, t_file *prev)
{
	t_file	*elem;

	if (!(elem = (t_file*)malloc(sizeof(t_file))))
		return (NULL);
	if (prev)
		elem->prev = prev;
	elem->next = NULL;
	if (!(elem->elem = (struct dirent *)malloc(sizeof(struct dirent*))))
		return (NULL);
	ft_memcpy(elem->elem, file, sizeof(file));
	return (elem);
}
