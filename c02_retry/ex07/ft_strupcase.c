/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:35:36 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/21 02:47:04 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'a' && str[idx] <= 'z')
			str[idx] -= 32;
		idx++;
	}
	return (str);
}
