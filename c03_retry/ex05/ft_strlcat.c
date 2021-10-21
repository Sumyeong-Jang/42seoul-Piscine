/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:46:25 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/21 12:32:28 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	dest_len;
	unsigned int	src_len;

	idx = 0;
	while (src[idx] != '\0')
		idx++;
	src_len = idx;
	idx = 0;
	while (dest[idx] != '\0')
		idx++;
	dest_len = idx;
	while (*src != '\0' && idx < size - 1)
	{
		dest[idx] = *src;
		src++;
		idx++;
	}
	dest[idx] = '\0';
	if (size <= dest_len)
		src_len += size;
	else
		src_len += dest_len;
	return (src_len);
}
