/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 23:24:37 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/26 05:24:54 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *string;

	if (size > UINT64_MAX || (size + 1 == 0))
		return (NULL);
	string = (char *)ft_memalloc(size + 1);
	if (!string)
		return (NULL);
	return (string);
}
