/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:04:24 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/11/04 14:22:29 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*char_s;

	char_s = (unsigned char *) s;
	while (n--)
	{
		*char_s = (unsigned char) c;
		char_s++;
	}
	return (s);
}
