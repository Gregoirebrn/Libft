/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:45:45 by grebrune          #+#    #+#             */
/*   Updated: 2023/09/26 16:54:22 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcpy(int *y, char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[*y] = src[i];
		i++;
		*y += 1;
	}
	return (*y);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*strj;
	int		y;

	i = 0;
	len = (size - 1) * ft_strlen(sep);
	while (strs[i])
		len += ft_strlen(strs[i++]);
	strj = malloc(sizeof(char) * (len + 1));
	if (strj == NULL)
		return (strj);
	i = 0;
	y = 0;
	if (size == 0)
		return (strj);
	while (i < size)
	{
		ft_strcpy(&y, strs[i], strj);
		if (i < size - 1)
			ft_strcpy(&y, sep, strj);
		i++;
	}
	strj[y] = '\0';
	return (strj);
}
/*
int	main(int argc, char **argv)
{
	char	*strj;

	printf("%s\n", strj = ft_strjoin(argc, argv, "U"));
	free (strj);
}
*/
