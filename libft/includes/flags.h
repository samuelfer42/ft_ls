/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 00:07:28 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H
# include "specifiers.h"
# define FLAG_HEX (1)
# define FLAG_PLUS (2)
# define FLAG_MINUS (4)
# define FLAG_SPACE (8)
# define FLAG_S_HH (16)
# define FLAG_S_H (32)
# define FLAG_S_L (64)
# define FLAG_S_LL (128)
# define FLAG_S_UPPER_L (256)
# define FLAG_S_Z (512)
# define FLAG_S_T (1024)
# define FLAG_S_J (2048)

int		get_flags(char *str, t_spec *spec);

#endif
