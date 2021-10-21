/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:17:08 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/21 14:17:24 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	idx;
	int	src_idx;

	idx = 0;
	src_idx = 0;
	while (dest[idx] != '\0')
		idx++;
	while (src[src_idx] != '\0' && nb > 0)
	{
		dest[idx + src_idx] = src[src_idx];
		src_idx++;
		nb--;
	}
	dest[idx + src_idx] = '\0';
	return (dest);
}
