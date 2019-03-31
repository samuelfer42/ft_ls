/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 22:46:47 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H
# define OPTIONS ("cCsSpdDioOuUxXfFbr")
# include "specifiers.h"

int		is_option(char c);
int		charset_match(char *s, char c);
int		search_reverse(char *str, char c, int start);
int		flag(int nbr, int flags);
int		is_valid_size_flag(char c);
int		is_printable(int print, t_spec *spec, int *maxlen);

#endif
