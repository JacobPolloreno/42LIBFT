/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:58:45 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/24 08:57:44 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			n--;
		}
		else
			return ((unsigned)*s1 - (unsigned)*s2);
	}
	return (0);
}
