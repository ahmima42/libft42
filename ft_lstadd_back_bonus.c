/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmima <ahmima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:14:23 by ahmima            #+#    #+#             */
/*   Updated: 2024/11/17 15:06:11 by ahmima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new && lst)
	{
		if (*lst == NULL)
		{
			*lst = new;
		}
		else
		{
			temp = ft_lstlast(*lst);
			temp->next = new;
		}
		new->next = NULL;
	}
}
