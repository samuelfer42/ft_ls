/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info_2.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 13:15:30 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_INFO_2_H
# define GET_INFO_2_H
# include "args.h"
# include "file_list.h"
# include <sys/stat.h>

void	build_permission_string(char *str, int st_mode);
void	get_symlink_target(t_files *file);

#endif
