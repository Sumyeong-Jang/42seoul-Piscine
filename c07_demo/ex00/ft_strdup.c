/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:49:54 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/26 19:39:06 by sumjang          ###   ########.fr       */
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
	if (dup == NULL)
		return (0);
	while (src[idx])
	{
		dup[idx] = src[idx];
		idx++;
	}
	dup[idx] = '\0';
	return (dup);
}
