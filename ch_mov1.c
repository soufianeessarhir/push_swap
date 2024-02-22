/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch_mov1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 05:41:30 by sessarhi          #+#    #+#             */
/*   Updated: 2024/02/22 12:07:35 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_list **stack_a)
{
	int tmp;
	int tmp1;
	
	tmp = (*stack_a)->content;
	tmp1 = (*stack_a)->index;
	(*stack_a) = (*stack_a)->next;
	ft_lstadd_back(stack_a,ft_lstnew(tmp,tmp1));
}
void rb(t_list **stack_b)
{
	int tmp;
	int tmp1;
	
	tmp = (*stack_b)->content;
	tmp1 = (*stack_b)->index;
	(*stack_b) = (*stack_b)->next;
	ft_lstadd_back(stack_b,ft_lstnew(tmp,tmp1));

}
void rr(t_list **stack_a, t_list **stack_b)
{
	ra (stack_a);
	rb (stack_b);
}