/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:18:19 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/14 13:34:07 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	ch;

	ch = '0' - 1;
	while (ch++ < '9')
	{
		write(1, &ch, 1);
	}
}

int	main(void)
{
	ft_print_numbers();
}