/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 03:18:56 by amehmeto          #+#    #+#             */
/*   Updated: 2017/12/20 05:32:35 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_folder(t_file *list)
{
	while (list->next)
	{
		printf("%p \n", list->elem->d_name);
		list = list->next;
	}

}
void	name_stack(DIR *dirp)
{
	struct dirent	*file;
	char			*path;
	t_file			*head;
	t_file			*tmp;

	path = NULL;
	head = NULL;
	tmp = NULL;
	while ((file = readdir(dirp)))
	{
		if (!head)
		{
			head = lst_create(file, path, NULL);
			tmp = head;
		}
		else
		{
			tmp->next = lst_create(file, path, tmp);
			tmp = tmp->next;
		}
	}
	display_folder(head);
}



int		main(int ac, char **av)
{
	struct dirent	*file;
	DIR				*dirp;

	(void)ac;
	(void)av;

	printf("%d \n", ac);
	dirp = opendir(".");
	name_stack(dirp);


	return (0);
}
