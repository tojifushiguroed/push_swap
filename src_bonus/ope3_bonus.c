/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ope3_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egolboyu <egolboyu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:32:47 by egolboyu          #+#    #+#             */
/*   Updated: 2024/03/20 16:32:49 by egolboyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	ft_s(t_list **stack)
{
	t_list	*tmp;

	if (!(*stack) || !((*stack)->next))
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	sa(t_list **stack1)
{
	ft_s(stack1);
}

void	sb(t_list **stack2)
{
	ft_s(stack2);
}

void	ss(t_list **stack1, t_list **stack2)
{
	ft_s(stack1);
	ft_s(stack2);
}
