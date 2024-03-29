/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:22:12 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/21 02:40:11 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!(str[idx] >= '0' && str[idx] <= '9'))
			return (0);
		idx++;
	}
	return (1);
}
