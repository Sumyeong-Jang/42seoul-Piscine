/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:41:07 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/17 12:37:51 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	solution(char *num);
void	plus(char *num, char D);

void	ft_print_comb2(void)
{
	char	pnum[7];
	char	*num;

	num = pnum;
	num[0] = '0';
	num[1] = '0';
	num[2] = ' ';
	num[3] = '0';
	num[4] = '1';
	num[5] = ',';
	num[6] = ' ';
	solution(num);
}

void	solution(char *num)
{
	write(1, num, 7);
	if (num[0] == '9' && num[1] == '7' && num[4] == '9')
	{
		write(1, "98 99", 5);
		return ;
	}
	if (num[3] == '9' && num[4] == '9')
	{
		plus(num, 'L');
		solution(num);
	}
	else
	{
		plus(num, 'R');
		solution(num);
	}
}

void	plus(char *num, char D)
{
	int	id;

	id = 0;
	if (D == 'R')
		id += 3;
	if (num[id + 1] < '9')
		num[id + 1] += 1;
	else
	{
		num[id] += 1;
		num[id + 1] = '0';
	}
	if (D == 'L')
	{
		num[3] = num[0];
		num[4] = num[1];
		plus(num, 'R');
	}
}
