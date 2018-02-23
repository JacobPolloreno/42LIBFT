/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:58:45 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/22 19:24:39 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	while ((s1[0] || s2[0]) && n)
	{
		if (s1[0] == s2[0])
		{
			s1++;
			s2++;
			n--;
		}
		else
			return ((unsigned)s1[0] - (unsigned)s2[0]);
	}
	return (0);
}
