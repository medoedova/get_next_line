/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 07:05:31 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/25 07:07:40 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_abs(long long n)
{
	if (n < 0)
		return (-n);
	return (n);
}