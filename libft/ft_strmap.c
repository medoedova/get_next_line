/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 21:19:45 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/21 23:12:18 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *result;
	char *ptr;
	char *ptr_res;

	if (!s)
		return (NULL);
	result = ft_memalloc((size_t)(ft_strlen((char *)s) + 1));
	if (!result)
		return (NULL);
	ptr = (char *)s;
	ptr_res = result;
	while (*ptr)
	{
		*ptr_res = f(*ptr);
		ptr_res++;
		ptr++;
	}
	return (result);
}
