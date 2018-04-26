/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 13:31:45 by jpollore          #+#    #+#             */
/*   Updated: 2018/04/26 14:57:56 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert ASCII decimal-digit string to integer
*/

char	*ft_itoa(long n)
{
	return (ft_itoa_base(n, 10));
}
