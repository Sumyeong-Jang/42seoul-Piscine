/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:46:37 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/24 20:24:17 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	idx;

	idx = nb - 1;
	if (nb <= 1)
		return (2);
	while (idx++)
	{
		if (is_prime(idx) == 1)
			break ;
	}
	return (idx);
}

int	is_prime(int nb)
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

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_find_next_prime(2100000000));
	return 0;
}
