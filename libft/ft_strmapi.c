/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 21:53:29 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/21 23:17:57 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*result;

	if (!s || !(*s))
		return (NULL);
	result = ft_memalloc((size_t)(ft_strlen((char *)s) + 1));
	if (!result)
		return (NULL);
	index = 0;
	while (s[index])
	{
		result[index] = f(index, (char)s[index]);
		index++;
	}
	return (result);
}
