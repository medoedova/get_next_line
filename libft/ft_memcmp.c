/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 19:26:34 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/17 19:59:38 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a;
	const unsigned char	*b;
	size_t				index;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	index = 0;
	if (n == 0)
		return (0);
	while (index < (n - 1) && a[index] == b[index])
		index++;
	return (a[index] - b[index]);
}
