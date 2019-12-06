/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 19:50:56 by vrhaena           #+#    #+#             */
/*   Updated: 2019/11/27 10:23:56 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len;

	len = 0;
	if (!s1 || !s2)
		return (0);
	if (s1 && s2)
		len = (size_t)(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(result = ft_memalloc(len)))
		return (NULL);
	if (s1)
		result = ft_strcpy(result, (char *)s1);
	if (s1 && s2)
		result = ft_strcat(result, (char *)s2);
	return (result);
}
