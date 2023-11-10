/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:52:01 by grebrune          #+#    #+#             */
/*   Updated: 2023/11/09 21:03:14 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mal;

	mal = malloc(nmemb * size);
	if (mal == NULL)
		return (mal);
	ft_bzero(mal, nmemb * size);
	return (mal);
}
