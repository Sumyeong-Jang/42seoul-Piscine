/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 19:40:54 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/26 19:53:18 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	bound;
	int	idx;
	int	*num;

	bound = max - min;
	idx = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	num = (int *)malloc(bound * sizeof(int));
	if (!num)
	{
		*range = 0;
		return (0);
	}
	while (idx < bound)
	{
		num[idx] = min + idx;
		idx++;
	}
	*range = num;
	return (bound);
}
