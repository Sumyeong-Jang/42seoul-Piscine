/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 13:41:43 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/24 14:23:37 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_space(char ch);
int	is_base(char ch, char *base);
int	base_valid(char *base);
int	atoi(char ch, char *base, int result);

int	ft_atoi_base(char *str, char *base)
{
	int	minus;
	int	result;

	result = 0;
	minus = 1;
	while (is_space(*str) == 1)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	if (base_valid(base) == 0)
		return (0);
	while (*str != '\0')
	{	
		if (is_base(*str, base) == 0)
			return (result);
		else
			result = atoi(*str, base, result);
		str++;
	}
	return (minus * result);
}

int	atoi(char ch, char *base, int result)
{
	int	idx;

	idx = 0;
	while (base[idx] != '\0')
	{
		if (base[idx] == ch)
			return (result * 10 + idx);
		idx++;
	}
	return (result);
}

int	base_valid(char *base)
{
	int	idx;
	int	len_repit;

	idx = 0;
	len_repit = 0;
	while (base[len_repit] != '\0')
		len_repit++;
	if (len_repit <= 1)
		return (0);
	while (base[idx] != '\0')
	{
		len_repit = 0;
		while (len_repit < idx)
		{
			if (base[len_repit] == base[idx])
				return (0);
			len_repit++;
		}
		if (base[idx] == '+' || base[idx] == '-')
			return (0);
		if (is_space(base[idx]) == 1)
			return (0);
		idx++;
	}
	return (1);
}

int	is_base(char ch, char *base)
{
	int	idx;

	idx = 0;
	while (base[idx] != '\0')
	{
		if (ch == base[idx])
			return (1);
		idx++;
	}
	return (0);
}

int	is_space(char ch)
{
	if (ch >= 8 && ch <= 13)
		return (1);
	if (ch == 32)
		return (1);
	return (0);
}
