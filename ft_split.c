/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:57:33 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/11/10 00:14:24 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *str, char c)
{
	int	i;
	int	count;

	if (!str)
		return (0);
	if (str[0] && !ft_strchr(str, c))
		return (1);
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			count++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (count);
}

size_t	ft_wordsize(const char *str, int n, char c)
{
	size_t	i;

	i = 0;
	while (str[++n] && str[n] != c)
		i++;
	return (i);
}

char	**ft_split(const char *str, char c)
{
	char	**ptr;
	int		size;
	int		j;
	int		i;

	i = 0;
	j = 0;
	size = ft_wordcount(str, c);
	ptr = (char **)malloc((size + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr[size] = NULL;
	while (j < size)
	{
		while (str[i] && str[i] == c)
			i ++;
		if (str[i] && str[i] != c)
			ptr[j] = ft_substr(str, i, ft_wordsize(str, i - 1, c));
		while (str[i] && str[i] != c)
			i ++;
		j++;
	}
	return (ptr);
}
