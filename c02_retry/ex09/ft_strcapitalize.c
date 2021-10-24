/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:39:38 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/21 03:23:30 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	lowercase(char ch);
int	uppercase(char ch);
int	number(char ch);

char	*ft_strcapitalize(char *str)
{
	int	idx;
	int	word;

	idx = 0;
	word = 0;
	while (str[idx] != '\0')
	{
		if (word == 0 && lowercase(str[idx]))
			str[idx] -= 32;
		else if (word != 0 && uppercase(str[idx]))
			str[idx] += 32;
		if (!lowercase(str[idx]) && !uppercase(str[idx]) && !number(str[idx]))
			word = 0;
		else
			word++;
		idx++;
	}
	return (str);
}

int	lowercase(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (1);
	else
		return (0);
}

int	uppercase(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}

int	number(char ch)
{
	if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}
