/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 04:19:17 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/28 06:34:31 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		str_len(char *str);
char	*str_cpy(char *result, char *str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len;
	int		idx;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	idx = -1;
	len = 0;
	while (++idx < size)
		len += str_len(strs[idx]);
	len += (str_len(sep) * (size - 1));
	result = (char *)malloc(len * sizeof(char));
	if (!result)
		return (0);
	idx = 0;
	while (idx < size)
	{
		result = str_cpy(result, strs[idx]);
		result = str_cpy(result, sep);
		idx++;
	}
	result = str_cpy(result, strs[idx]);
	return (result);
}

char	*str_cpy(char *result, char *str)
{
	int	idx;
	int	i;

	idx = 0;
	i = 0;
	while (result[idx])
		idx++;
	while (str[i])
	{
		result[idx + i] = str[i];
		i++;
	}
	result[idx + i] = '\0';
	return (result);
}

int	str_len(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}
