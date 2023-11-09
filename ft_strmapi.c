/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <grebrune@sutdent.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:29:05 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/08 15:32:40 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*dst;
	unsigned int		i;
	unsigned int		size;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	dst = malloc(sizeof(char) * size + 1);
	if (dst == NULL)
		return (NULL);
	while (i < size)
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	return (dst);
}