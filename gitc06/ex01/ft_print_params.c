/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:52:22 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/24 20:05:32 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int n, char **str)
{
	int	idx;
	int	i;

	idx = 1;
	i = 0;
	while (idx < n)
	{
		i = 0;
		while (str[idx][i] != '\0')
		{
			write(1, &str[idx][i], 1);
			i++;
		}
		write(1, "\n", 1);
		idx++;
	}
}
