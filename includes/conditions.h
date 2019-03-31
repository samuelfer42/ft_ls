/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 06:29:43 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONDITIONS_H
# define CONDITIONS_H
# include "args.h"

int		file_exists(char *path);
int		is_recursive(char *foldername, t_args *args);
int		is_hidden(char *filename, t_args *args);
int		is_dot(char *foldername);

#endif
