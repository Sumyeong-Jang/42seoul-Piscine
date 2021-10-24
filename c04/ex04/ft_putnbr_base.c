/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:43:54 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/24 14:07:27 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_valid(int len, char *base);
int	base_len(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		idx;
	char	convert[12];

	len = base_len(base);
	idx = 0;
	if (base_valid(len, base) == 0)
		return ;
	while (nbr > 0)
	{
		convert[idx] = base[nbr % len];
		nbr /= len;
		idx++;
	}
	while (idx >= 0)
	{
		write(1, &convert[idx], 1);
		idx--;
	}
}

int	base_len(char *base)
{
	int	idx;

	idx = 0;
	while (base[idx] != '\0')
		idx++;
	return (idx);
}

int	base_valid(int len, char *base)
{
	int	idx;
	int	repit;

	idx = 0;
	while (base[idx] != '\0')
	{
		if (len <= 1)
			return (0);
		repit = 0;
		while (repit < idx)
		{
			if (base[repit] == base[idx])
				return (0);
			repit++;
		}
		if (base[idx] == '+' || base[idx] == '-')
			return (0);
		idx++;
	}
	return (1);
}
