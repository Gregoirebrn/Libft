/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <grebrune@sutdent.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:21:22 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/08 14:56:55 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	size_t	lensrc;
	size_t	lendst;

	x = 0;
	i = 0;
	while (src[lensrc])
		lensrc++;
	if (size == 0)
		return (lensrc);
	while (dst[lendst])
		lendst++;
	if (size < lendst)
		return (size + lensrc);
	i = lendst;
	while (src[x] && i < size - 1)
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	return (lendst + lensrc);
}
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char src[] = "my";
	char dst[] = "test";
	printf("%i \n", ft_strlcat(dst, src, 9));
	printf("%s \n", dst);

	char src2[] = "my";
	char dst2[] = "test";
	printf("%i \n", strlcat(dst2, src2, 9));
	printf("%s \n", dst2);
}
*/
