/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrhaena <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 06:46:03 by vrhaena           #+#    #+#             */
/*   Updated: 2019/09/25 23:00:25 by vrhaena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;
	t_list *lst;

	if (alst == NULL)
		return ;
	lst = *alst;
	while (lst != NULL)
	{
		temp = lst->next;
		ft_lstdelone(&lst, del);
		lst = temp;
	}
	*alst = NULL;
}
