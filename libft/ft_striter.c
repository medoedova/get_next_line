/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:04:36 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/21 18:27:11 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	char *ptr;

	if (!s || !f)
		return ;
	ptr = s;
	while (*ptr)
		f(ptr++);
}
