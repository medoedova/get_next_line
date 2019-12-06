/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 02:49:07 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/25 03:20:50 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t p;

	if (!(*needle))
		return ((char *)haystack);
	p = 0;
	while (haystack[p] != '\0' && p < len)
	{
		if (haystack[p] == needle[0])
		{
			i = 1;
			while (needle[i] != '\0' && haystack[p + i] == needle[i] &&
					(p + i) < len)
				i++;
			if (needle[i] == '\0')
				return ((char *)&haystack[p]);
		}
		p++;
	}
	return (NULL);
}
