/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpollore <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:14:39 by jpollore          #+#    #+#             */
/*   Updated: 2018/02/23 17:57:40 by jpollore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *haystack, char *needle)
{
	int reset_len;

	reset_len = 0;
	if (*needle == '\0')
		return (haystack);
	while (*needle)
	{
		if (*haystack == '\0')
			break ;
		else if (*haystack == *needle)
		{
			reset_len++;
			needle++;
		}
		else if (reset_len)
		{
			needle = needle - reset_len;
			reset_len = 0;
		}
		haystack++;
	}
	if (reset_len && *needle == '\0')
		return (haystack - reset_len);
	return ((void *)0);
}
