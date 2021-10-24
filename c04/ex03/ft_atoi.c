/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:29:05 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/24 12:44:21 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char ch);

int	ft_atoi(char *str)
{
	int	minus;
	int	n;

	n = 0;
	minus = 1;
	while (is_space(*str) == 1)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (minus * n);
}

int	is_space(char ch)
{
	if (ch >= 8 && ch <= 13)
		return (1);
	if (ch == 32)
		return (1);
	return (0);
}
