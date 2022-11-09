/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 13:35:45 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/11/06 15:36:29 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subptr;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		len = 0;
	else if (i - start < len)
		len = i - start;
	subptr = (char *)malloc(len + 1);
	if (!subptr)
		return (NULL);
	i = 0;
	subptr[len] = '\0';
	while (i < len)
	{
		subptr[i] = s[start + i];
		i++;
	}
	return (subptr);
}
