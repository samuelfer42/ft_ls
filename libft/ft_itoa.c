/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <sfernand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 19:23:56 by sfernand          #+#    #+#             */
/*   Updated: 2019/03/31 17:43:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	nbr_length(int nbr)
{
	int len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*output;
	int		len;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = nbr_length(n);
	output = ft_strnew(len);
	if (output == 0)
		return (0);
	output[0] = '0';
	if (n < 0)
		output[0] = '-';
	n = ft_abs(n);
	while (n != 0)
	{
		output[--len] = '0' + (n % 10);
		n /= 10;
	}
	return (output);
}
