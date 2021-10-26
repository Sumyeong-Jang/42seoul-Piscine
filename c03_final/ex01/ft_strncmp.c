/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:46:32 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/21 18:20:31 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (s1[idx] && s2[idx] && s1[idx] == s2[idx] && idx < n - 1)
		idx++;
	return (s1[idx] - s2[idx]);
}
