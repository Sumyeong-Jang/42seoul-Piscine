/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:10:51 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/17 20:50:02 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	idx;

	idx = 0;
	if (src 
	while (src[idx] != '\0' && n > 0)
	{
		dest[idx] = src[idx];
		idx++;
		n--;
	}
	dest[idx] = '\0';
	return (dest);
}
