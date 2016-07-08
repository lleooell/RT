/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puto.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguesner <mguesner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 14:14:03 by mguesner          #+#    #+#             */
/*   Updated: 2013/12/22 12:22:53 by mguesner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_puto(unsigned int n)
{
	int	i;

	i = 0;
	if (n < 8)
	{
		ft_putchar(n + 48);
		i++;
	}
	else
	{
		i = 1 + i + ft_puto(n / 8);
		ft_putchar((n % 8) + 48);
	}
	return (i);
}