/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 03:22:58 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/11/09 03:55:26 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkifset(char const *set, char c)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	int		i;
	int		j;
	int		strlen;
	char	*ptr;

	i = 0;
	if (!str)
		return (NULL);
	strlen = ft_strlen(str);
	while (ft_checkifset(set, str[i]) && str)
		i++;
	while (ft_checkifset(set, str[strlen - 1]) && i < strlen)
		strlen--;
	ptr = malloc(((strlen - i) + 1));
	if (!ptr)
		return (NULL);
	j = 0;
	while (i < strlen && str[i])
		ptr[j++] = str[i++];
	ptr[j] = '\0';
	return (ptr);
}
