/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_non_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 07:24:45 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t	ft_putnstr_non_printable(char *str, size_t n)
{
	size_t	i;

	if (str == NULL)
		return (ft_putnstr("(null)", n));
	else
	{
		i = 0;
		while (str[i] && i < n)
		{
			if (str[i] < 32 || str[i] > 126)
			{
				ft_putchar('\\');
				ft_print_hex(str[i], 2);
			}
			else
				ft_putchar(str[i]);
			i++;
		}
	}
	return (i);
}
