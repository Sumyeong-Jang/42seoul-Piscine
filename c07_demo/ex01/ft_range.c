/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 16:02:35 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/26 20:03:35 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	range;
	int	idx;

	range = max - min;
	idx = 0;
	num = (int *)malloc(range * sizeof(int));
	if (num == NULL)
		return (0);
	if (min >= max)
		return (0);
	while (idx < range)
	{
		num[idx] = min + idx;
		idx++;
	}
	return (num);
}
