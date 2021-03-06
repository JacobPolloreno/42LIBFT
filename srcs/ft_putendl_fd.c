/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 15:45:19 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/25 15:45:54 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Put a string with newline to file descriptor
*/

void	ft_putendl_fd(const char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
