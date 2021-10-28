/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 06:09:59 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/28 06:21:09 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "ft_stock_str.h"

void	ft_putstr(char *str);
void	ft_putnbr(int n);

void	ft_show_tab(struct s_stock_str *par)
{
	int	idx;

	idx = 0;
	if (!par)
		return ;
	while (par[idx].str)
	{
		ft_putstr(par[idx].str);
		ft_putstr("\n");
		ft_putnbr(par[idx].size);
		ft_putstr("\n");
		ft_putstr(par[idx].copy);
		ft_putstr("\n");
		idx++;
	}
}

void	ft_putnbr(int n)
{
	char	ch;

	if (n > 9)
		ft_putnbr(n / 10);
	ch = n % 10 + '0';
	write(1, &ch, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
