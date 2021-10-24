/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:09:53 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/21 16:00:29 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_hex(unsigned char ch);

void	ft_putstr_non_printable(char *str)
{
	int				idx;
	unsigned char	div;
	unsigned char	mod;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] > 31 && str[idx] < 127)
			write(1, &str[idx], 1);
		else
		{
			write(1, "\\", 1);
			div = str[idx] / 16;
			mod = str[idx] % 16;
			ft_hex(div);
			ft_hex(mod);
		}
		idx++;
	}
}

void	ft_hex(unsigned char ch)
{
	if (ch >= 10)
		ch = 'a' + (ch - 10);
	else
		ch += 48;
	write(1, &ch, 1);
}
