/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:49:24 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/25 19:43:06 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (nb)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	idx;
	int	sqrt;

	if (nb <= 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	idx = 2;
	sqrt = ft_sqrt(nb);
	while (idx <= sqrt && nb % idx != 0)
		idx++;
	if (idx > sqrt)
		return (1);
	else
		return (0);
}

int	ft_sqrt(int nb)
{
	long long	r;

	r = 1;
	if (nb <= 0)
		return (0);
	while (r * r <= nb)
	{
		if (r * r == nb)
			return (r);
		r++;
	}
	return (r);
}
