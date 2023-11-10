/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:09:40 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/10 17:15:53 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (s[0] == '\0' && c != 0)
		return (NULL);
	while (0 <= i)
	{
		if ((unsigned char)c == ((char *)s)[i])
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);
}
