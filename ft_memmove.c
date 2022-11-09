/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:21:21 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/11/04 15:55:12 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{	
	if (!src && !dest)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n-- > 0)
		((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	return (dest);
}
