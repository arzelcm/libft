/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arcanava <arcanava@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 04:23:57 by arcanava          #+#    #+#             */
/*   Updated: 2024/01/20 04:25:04 by arcanava         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*curr_lst;
	size_t	i;

	curr_lst = lst;
	i = 0;
	while (curr_lst)
	{
		curr_lst = curr_lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	size_t	i = 0;
	t_list	*lst = ft_lstnew(0);
	t_list	*prev_list = lst;
	while (i < 43)
	{
		prev_list->next = ft_lstnew((void *) &i);
		prev_list = prev_list->next;
		i++;
	}

	ft_putnbr_fd(ft_lstsize(NULL), 1);
}*/
