/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 02:16:36 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/28 20:07:37 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		idx;

	idx = 0;
	while (src[idx])
		idx++;
	dup = (char *)malloc(idx * sizeof(char) + 1);
	if (!dup)
		return (0);
	idx = 0;
	while (src[idx])
	{
		dup[idx] = src[idx];
		idx++;
	}
	dup[idx] = '\0';
	return (dup);
}
