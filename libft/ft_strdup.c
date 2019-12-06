/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 03:17:26 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/13 18:12:57 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	len = 0;
	while (s1[len] != '\0')
	{
		new[len] = s1[len];
		len++;
	}
	new[len] = '\0';
	return (new);
}
