/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:21:40 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/11/10 00:27:03 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	size;
	size_t	i;
	char	*ptr;

	if (!str)
		return (NULL);
	size = ft_strlen(str);
	ptr = malloc(size + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = f(i, str[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
