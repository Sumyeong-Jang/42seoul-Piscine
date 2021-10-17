/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:59:08 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/17 14:26:25 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		find_number(int nb);
void	print_int(int tmp);
int		remains(int nb, int tmp, int n);

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
	while (nb > 0)
		nb = find_number(nb);
	write(1, "\n", 1);
}

int	find_number(int nb)
{
	int	tmp;
	int	n;

	tmp = nb;
	n = 0;
	while (tmp > 9)
	{
		tmp /= 10;
		n += 1;
	}
	print_int(tmp);	
	return (remains(nb, tmp, n));
}

void	print_int(int tmp)
{
	tmp += 48;
	write(1, &tmp, 1);
}

int	remains(int nb, int tmp, int n)
{
	while (n-- > 0)
		tmp *= 10;
	return (nb - tmp);
}

int main(void)
{
	ft_putnbr(-123456);
}
