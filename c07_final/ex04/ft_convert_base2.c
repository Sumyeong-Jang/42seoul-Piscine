/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:56:09 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/28 20:08:27 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		idx++;
	return (idx);
}

int	is_space(char ch)
{
	if (ch >= 9 && ch <= 13)
		return (1);
	if (ch == 32)
		return (1);
	return (0);
}

char	*itoa_minus(long n, char *base_to)
{
	int		base_len;
	int		i;
	long		tmp;
	char	*result;

	i = 1;
	base_len = ft_strlen(base_to);
	tmp = n;
	while (tmp > 0)
	{
		tmp /= (long)base_len;
		i++;
	}
	if (n != 0)
		i--;
	result = (char *)malloc(i * sizeof(char) + 1);
	result[0] = '-';
	while (i > 0)
	{
		result[(long)i + tmp] = base_to[n % (long)base_len];
		n /= (long)base_len;
		i--;
	}
	return (result);
}
