/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:51:00 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/19 18:58:20 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	idx;
	int	src_idx;

	idx = 0;
	src_idx = 0;
	while (dest[idx] != '\0')
		idx++;
	while (src[src_idx] != '\0')
	{
		dest[idx + src_idx] = src[src_idx];
		src_idx++;
	}
	dest[idx + src_idx] = '\0';
	return (dest);
}
