/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 19:56:52 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/24 14:07:55 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	number(int nb);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb > 0)
		number(nb);
}

void	number(int nb)
{
	int		idx;
	char	print[11];

	idx = 0;
	while (nb > 0)
	{
		print[idx] = nb % 10 + '0';
		nb = nb / 10;
		idx++;
	}
	idx--;
	while (idx >= 0)
	{
		write(1, &print[idx], 1);
		idx--;
	}
}
