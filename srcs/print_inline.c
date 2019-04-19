/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_inline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 17:47:16 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:47:56 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printing.h"
#include "file_list.h"
#include "list_utils.h"
#include "libft.h"
#include "args.h"
#include "free.h"
#include "printing_utils.h"
#include "conditions.h"

void	print_files_inline(t_args *args, t_files *files)
{
	while (files != NULL)
	{
		if (args->flags & FLAG_COLOR)
			print_colors(files);
		ft_putstr(files->name);
		if (args->flags & FLAG_COLOR)
			ft_printf("{RESET}");
		ft_putchar('\n');
		files = files->next;
	}
}

void	print_folder_inline(t_args *args, t_folder *folders)
{
	if (folders->next != NULL || folders != args->search_folder)
		ft_printf("%s:\n", folders->fullpath);
	if (folders->files != 0)
		print_files_inline(args, folders->files);
	if (folders->next != NULL || folders->subfolders != NULL)
		ft_putchar('\n');
}
