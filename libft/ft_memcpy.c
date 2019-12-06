/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 07:46:05 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/25 21:27:53 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = dst;
	b = src;
	if ((a == NULL && b == NULL) || n == 0)
		return (dst);
	while (n--)
	{
		*a = *b;
		a++;
		b++;
	}
	return (dst);
}
