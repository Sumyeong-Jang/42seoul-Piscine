/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 04:35:50 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/17 16:59:52 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	idx;
	int	tmp;

	idx = 0;
	while (idx < size / 2)
	{
		tmp = *(tab + idx);
		*(tab + idx) = *(tab + size - idx - 1);
		*(tab + size - idx - 1) = tmp;
		idx++;
	}
}	
