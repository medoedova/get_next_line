/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 18:49:53 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/25 21:39:05 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size(unsigned int n)
{
	unsigned int	size;

	size = 0;
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	return (size + 1);
}

char			*ft_itoa(int n)
{
	char			*res;
	unsigned int	size;
	unsigned int	nbr;
	unsigned int	index;

	index = 0;
	if (n < 0)
		nbr = (unsigned int)(n * (-1));
	else
		nbr = (unsigned int)n;
	size = (unsigned int)ft_size(nbr);
	if (!(res = (char *)malloc(sizeof(char) * (size + 1 + (n < 0 ? 1 : 0)))))
		return (0);
	if (n < 0 && (res[index] = '-'))
		size++;
	index = size - 1;
	while (nbr > 9)
	{
		res[index--] = (char)(nbr % 10 + 48);
		nbr /= 10;
	}
	res[index] = (char)(nbr % 10 + 48);
	res[size] = '\0';
	return (res);
}
