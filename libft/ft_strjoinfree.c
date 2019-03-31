/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 00:17:31 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strjoinfree(char *source, const char *concat)
{
	char	*tmp;

	if (source == NULL)
		tmp = ft_strdup(concat);
	else if (concat != NULL)
		tmp = ft_strjoin(source, concat);
	else
		return (ft_strdup(""));
	free(source);
	return (tmp);
}

char		*ft_strjoinfree_both(char *source, char *concat)
{
	char	*tmp;

	if (source == NULL)
		tmp = ft_strdup(concat);
	else if (concat != NULL)
		tmp = ft_strjoin(source, concat);
	else
		return (ft_strdup(""));
	free(source);
	free(concat);
	return (tmp);
}

char		*ft_strjoinfree_last(const char *source, char *concat)
{
	char	*tmp;

	if (source == NULL)
		tmp = ft_strdup(concat);
	else if (concat != NULL)
		tmp = ft_strjoin(source, concat);
	else
		return (ft_strdup(""));
	free(concat);
	return (tmp);
}
