/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 17:47:45 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:47:56 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort.h"
#include "libft.h"
#include "sort_reverse.h"
#include "sort_time.h"

void	sort_folders(t_args *args, t_folder **folders)
{
	if (args->flags & FLAG_NON_SORT)
		return ;
	if (args->flags & FLAG_TIME_SORT)
		sort_time(folders);
	if (args->flags & FLAG_REVERSE)
		folders_reverse(folders);
}

void	sort_files(t_args *args, t_files **files)
{
	if (args->flags & FLAG_NON_SORT)
		return ;
	if (args->flags & FLAG_TIME_SORT)
		sort_time_files(files);
	if (args->flags & FLAG_REVERSE)
		files_reverse(files);
}
