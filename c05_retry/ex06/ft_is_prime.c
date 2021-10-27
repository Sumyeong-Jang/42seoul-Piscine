/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 16:26:13 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/25 16:26:47 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	idx;

	idx = nb;
	if (nb <= 1)
		return (0);
	while (--idx > 1)
	{
		if (nb % idx == 0)
			return (0);
	}
	return (1);
}