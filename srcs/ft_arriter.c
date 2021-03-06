/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arriter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:52:03 by jpollore          #+#    #+#             */
/*   Updated: 2018/05/28 14:58:03 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_arriter(void *arr, size_t len, size_t data_size, void (*f)(void *))
{
	size_t i;

	if (!arr || !len || !f)
		return ;
	i = 0;
	while (i < len)
		(*f)((arr + data_size * i++));
}
