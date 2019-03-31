/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing_utils.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 10:48:19 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTING_UTILS_H
# define PRINTING_UTILS_H

void	print_file_with_pad(t_files *file, int maxlen);
void	print_colors(t_files *files);
int		get_files_maxlen(t_files *files);
int		get_folderfiles_maxlen(t_folder *files);

#endif
