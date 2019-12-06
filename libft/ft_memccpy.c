/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 08:01:17 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/17 22:27:39 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*a;
	const unsigned char *b;
	size_t				i;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		if (a[i] == (unsigned char)c)
			return ((void *)(a + i + 1));
		++i;
	}
	return (NULL);
}
