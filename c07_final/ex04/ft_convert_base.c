/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:55:55 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/28 20:08:36 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_convert_base(char *nbr, char *base_from, char *base_to);
int			is_valid(char *base);
long		ft_atoi(char *nbr, char *base_from);
char		*itoa(long n, char *base_to);
char		*itoa_minus(long n, char *base_to);
int			ft_strlen(char *str);
int			is_space(char ch);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	minus;
	long	n;

	while (is_space(*nbr))
		nbr++;
	minus = 1;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			minus *= -1;
		nbr++;
	}
	if (!is_valid(base_from) || !is_valid(base_to))
		return (0);
	n = ft_atoi(nbr, base_from);
	if (minus == -1)
		nbr = itoa_minus(n, base_to);
	else
		nbr = itoa(n, base_to);
	return (nbr);
}

char	*itoa(long n, char *base_to)
{
	int			base_len;
	int			i;
	long		tmp;
	char		*result;

	i = 0;
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
	while (i >= 0)
	{
		result[(long)i + tmp] = base_to[n % (long)base_len];
		n /= (long)base_len;
		i--;
	}
	return (result);
}

long	ft_atoi(char *nbr, char *base_from)
{
	long	result;
	int		idx;
	int		base_len;

	result = 0;
	base_len = ft_strlen(base_from);
	while (*nbr)
	{
		idx = 0;
		while (base_from[idx])
		{
			if (base_from[idx] == *nbr)
			{
				result *= (long)base_len;
				result += (long)idx;
			}
			idx++;
		}
		nbr++;
	}
	return (result);
}

int	is_valid(char *base)
{
	int	idx;
	int	i;

	idx = 0;
	i = 0;
	while (base[i])
		i++;
	if (i <= 1)
		return (0);
	while (base[idx])
	{
		i = 0;
		while (i < idx)
		{
			if (base[i] == base[idx])
				return (0);
			i++;
		}
		if (base[idx] == '+' || base[idx] == '-')
			return (0);
		if (is_space(base[idx]) == 1)
			return (0);
		idx++;
	}
	return (1);
}
