/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_if.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 07:09:22 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlen_if(const char *s, int (*f)(int))
{
	size_t i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] && f(s[i]))
		i++;
	return (i);
}
