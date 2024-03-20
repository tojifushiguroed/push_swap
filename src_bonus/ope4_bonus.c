/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope4_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:32:53 by egolboyu          #+#    #+#             */
/*   Updated: 2024/03/20 16:32:55 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	ft_rr(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = *stack;
	end = ft_lstlast(*stack);
	while ((*stack)->next->next)
		*stack = (*stack)->next;
	end->next = tmp;
	(*stack)->next = NULL;
	*stack = end;
}

void	rra(t_list **stack1)
{
	ft_rr(stack1);
}

void	rrb(t_list **stack2)
{
	ft_rr(stack2);
}
