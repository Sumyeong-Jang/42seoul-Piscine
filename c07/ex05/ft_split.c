/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:59:58 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/28 15:11:56 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_char(char *str, char *charset);
int		is_charset(char ch, char *charset);
char	**split(char *str, char *charset, char **result, int len);

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		char_len;

	char_len = count_char(str, charset);
	result = (char **)malloc(sizeof(char *) * char_len + 1);
	result = split(str, charset, result, char_len);
	return (result);
}

char	**split(char *str, char *charset, char **result, int len)
{
	int		x;
	int		y;
	int		i;
	char	*bookmark;

	x = 0;
	while (len--)
	{
		while (is_charset(*str, charset) && *str)
			str++;
		y = 0;
		i = 0;
		bookmark = str;
		while (!is_charset(*str, charset) && *str++)
			i++;
		result[x] = (char *)malloc(sizeof(char) * i + 1);
		while (y < i)
			result[x][y++] = *bookmark++;
		result[x][y] = 0;
		x++;
	}
	result[x] = 0;
	return (result);
}

int	count_char(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		while (is_charset(*str, charset) && *str)
			str++;
		if (!*str)
			break ;
		cnt++;
		while (!is_charset(*str, charset) && *str)
			str++;
	}
	return (cnt);
}

int	is_charset(char ch, char *charset)
{
	while (*charset)
	{
		if (ch == *charset)
			return (1);
		charset++;
	}
	return (0);
}
