/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 07:09:22 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strcat(char *destination, const char *source)
{
	int i;
	int offset;

	offset = 0;
	while (destination[offset] != '\0')
		offset++;
	i = 0;
	while (source[i] != '\0')
	{
		destination[offset + i] = source[i];
		i++;
	}
	destination[offset + i] = '\0';
	return (destination);
}
