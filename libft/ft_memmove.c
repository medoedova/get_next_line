/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:50:20 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/13 23:12:25 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*a;
	const unsigned char	*b;
	size_t				i;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	i = 0;
	if ((a == NULL && b == NULL) || len == 0)
		return (dst);
	if (b < a)
	{
		while (++i <= len)
			a[len - i] = b[len - i];
	}
	else
	{
		while (len-- > 0)
		{
			*a = *b;
			a++;
			b++;
		}
	}
	return (dst);
}
