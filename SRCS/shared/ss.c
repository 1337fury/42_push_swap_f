/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdeel-o < abdeel-o@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 13:04:29 by abdeel-o          #+#    #+#             */
/*   Updated: 2023/01/15 20:12:50 by abdeel-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ss(t_stack *a, t_stack *b, int i)
{
	ft_sa(a, 1);
	ft_sb(b, 1);
	if (i != 1)
		ft_printf("ss\n");
}