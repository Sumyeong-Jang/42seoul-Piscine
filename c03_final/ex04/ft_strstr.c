/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:01:49 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/19 19:08:26 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	idx;
	int	n;
	int	bookmark;

	idx = 0;
	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[idx] != '\0')
	{
		if (str[idx] == to_find[n])
		{
			bookmark = idx;
			while (str[idx + n] == to_find[n] && to_find[n] && str[idx])
				n++;
			if (to_find[n] == '\0')
				return (&str[bookmark]);
			n = 0;
		}
		idx++;
	}
	return (NULL);
}
