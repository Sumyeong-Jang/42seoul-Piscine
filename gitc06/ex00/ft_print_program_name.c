/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:47:53 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/24 20:45:31 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int n, char **str)
{
	int	idx;
	char *file_name;

	idx = 0;
	n = 123;
	file_name = str[0];
	while (file_name[idx] != '\0')
	{
		write(1, &file_name[idx], 1);
		idx++;
	}
	write(1, "\n", 1);
	
}	
