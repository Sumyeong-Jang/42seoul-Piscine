/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 00:53:02 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/21 12:39:19 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	address(void *addr);

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		idx;
	char	*add;

	idx = 0;
	add = addr;
	if (size == 0)
		return (0);
	while (add[idx] != '\0')
	{
		if (idx % 16 == 0)
		{
			printf("%s\n", &add[idx]);
			address(&add[idx]);
			write(1, ":", 1);
		}
		write(1, "\n", 1);
		idx++;
	}
	return (0);
}
