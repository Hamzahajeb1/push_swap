/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-haji <hel-haji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:15:58 by hel-haji          #+#    #+#             */
/*   Updated: 2024/07/21 17:17:26 by hel-haji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	range(int n)
{
	int	i;

	if ( 6 <= n && 16 >= n)
		i = 6;
	else if ( 100 >= n)
		i = 15;
	else
		i = 40;
	return (i);
}
