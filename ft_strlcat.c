/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:54:38 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/11/03 14:22:35 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dstlen;
	unsigned int	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	if (size < dstlen + 1)
		return (size + srclen);
	if (size > dstlen + 1)
	{
		while (src[i] != '\0' && dstlen + 1 + i < size)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
