/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:09:40 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/09 20:45:31 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (i == 0)
		return (NULL);
	if (c < 32 || c > 126)
		return ((char *)s);
	while (0 <= i)
	{
		if (c == ((char *)s)[i])
			return (((char *)s) + i);
		i--;
	}
	return (NULL);
}
