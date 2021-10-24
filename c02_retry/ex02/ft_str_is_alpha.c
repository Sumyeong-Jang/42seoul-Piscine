/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:18:47 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/21 02:37:41 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char ch);

int	ft_str_is_alpha(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (is_alpha(str[idx]) == 0)
			return (0);
		idx++;
	}
	return (1);
}

int	is_alpha(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
