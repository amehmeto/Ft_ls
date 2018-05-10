/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amehmeto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 03:18:56 by amehmeto          #+#    #+#             */
/*   Updated: 2017/12/22 05:45:09 by amehmeto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_folder(t_file *list)
{
	while (list->next)
	{
		printf("%s \n", list->name);
		list = list->next;
	}

}
void	name_stack(char *folder_name)
{
	struct dirent	*file;
	char			*path;
	DIR				*dirp;
	t_file			*head;
	t_file			*tmp;

	path = NULL;
	head = NULL;
	tmp = NULL;
	if(!(dirp = opendir(folder_name)))
		return ;
	while ((file = readdir(dirp)))
	{
		if (!head)
		{
			head = lst_create(file->d_name, path, NULL);
			tmp = head;
		}
		else
		{
			tmp->next = lst_create(file->d_name, path, tmp);
			tmp = tmp->next;
		}
	}
	//sort_folder(head);
	display_folder(head);
	name_stack("src");
}



int		main(int ac, char **av)
{
	struct dirent	*file;

	(void)ac;
	(void)av;

	name_stack(".");

	return (0);
}
