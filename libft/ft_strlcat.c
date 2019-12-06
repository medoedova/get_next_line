/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 20:16:41 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/25 00:38:51 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t len_dst;
	size_t result;
	size_t i;

	len_dst = 0;
	result = 0;
	while (dst[len_dst] != '\0')
		len_dst++;
	while (src[result] != '\0')
		result++;
	if (size <= len_dst)
		result += size;
	else
		result += len_dst;
	i = 0;
	while (src[i] != '\0' && len_dst + 1 < size)
	{
		dst[len_dst] = src[i];
		i++;
		len_dst++;
	}
	dst[len_dst] = '\0';
	return (result);
}
