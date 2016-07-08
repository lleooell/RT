/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguesner <mguesner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/06 15:51:40 by mguesner          #+#    #+#             */
/*   Updated: 2015/05/06 15:56:40 by mguesner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/vecteur.h"

double	scalar(t_vec a, t_vec b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}