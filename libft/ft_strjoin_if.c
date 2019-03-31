/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_if.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 00:17:31 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strjoin_if(char *source, char *concat, int (*f)(int))
{
	char	*output;
	int		len;
	int		len2;

	if (source == NULL)
		output = ft_strdup_if(concat, f);
	else
	{
		len = ft_strlen(source);
		len2 = ft_strlen_if(concat, f);
		output = (char*)malloc(len + len2 + 1);
		ft_memmove(output, source, len);
		ft_memmove(output + len, concat, len2);
	}
	return (output);
}
