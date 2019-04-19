/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:03:07 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*destination;
	unsigned char	*source;

	if (n != 0)
	{
		if (dest < src)
			ft_memcpy(dest, src, n);
		else
		{
			destination = (unsigned char*)dest;
			source = (unsigned char*)src;
			i = n;
			while (i-- != 0)
			{
				destination[i] = source[i];
			}
		}
	}
	return (dest);
}
