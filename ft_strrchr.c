/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozerbib- <ozerbib-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:19:14 by ozerbib-          #+#    #+#             */
/*   Updated: 2022/11/05 20:07:46 by ozerbib-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*s1;

	s1 = ((char *)str);
	i = ft_strlen(s1);
	while (i >= 0)
	{
		if (s1[i] == (char)c)
			return (&s1[i]);
		i--;
	}
	return (0);
}
