/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 17:46:35 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:47:56 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "args_struct.h"

t_args	*new_args(void)
{
	t_args	*new;

	if ((new = (t_args*)ft_memalloc(sizeof(t_args))) == NULL)
		return (NULL);
	return (new);
}
