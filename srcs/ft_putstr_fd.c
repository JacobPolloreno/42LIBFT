/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:42:35 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/25 15:42:54 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write a string to file descriptor
*/

void	ft_putstr_fd(const char *s, int fd)
{
	char *ptr;

	ptr = (char *)s;
	while (*ptr)
		write(fd, ptr++, 1);
}
