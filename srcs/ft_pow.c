/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 14:42:20 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/25 14:42:21 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_pow(long base, int pow)
{
	if (pow == 0)
		return (1);
	else
		return (base * ft_pow(base, pow - 1));
}