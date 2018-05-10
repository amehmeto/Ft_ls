/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_crud.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 04:08:57 by amehmeto          #+#    #+#             */
/*   Updated: 2017/12/22 05:13:42 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

t_file		*lst_create(char *name, char *path, t_file *prev)
{
	t_file	*elem;

	if (!(elem = (t_file*)malloc(sizeof(t_file))))
		return (NULL);
	if (prev)
		elem->prev = prev;
	elem->next = NULL;
	if (!(elem->name = ft_strdup(name)))
		return (NULL);
	return (elem);
}
