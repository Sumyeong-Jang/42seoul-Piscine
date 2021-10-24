/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:49:45 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/21 03:48:22 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	idx;
	int	src_len;

	idx = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	while (src[idx] != '\0' && size > 1)
	{
		dest[idx] = src[idx];
		idx++;
		size--;
	}
	dest[idx] = '\0';
	return (src_len);
}
