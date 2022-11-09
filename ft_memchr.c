/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:43:46 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/11/05 15:29:48 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*char_s;
	size_t			i;

	i = 0;
	char_s = (unsigned char *) s;
	while (i < n)
	{
		if (char_s[i] == (unsigned char)c)
		{
			return ((void *)&char_s[i]);
		}
		i++;
	}
	return (NULL);
}
