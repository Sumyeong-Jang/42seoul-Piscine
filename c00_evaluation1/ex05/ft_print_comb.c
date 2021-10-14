/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 13:48:45 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/14 13:38:42 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	solution(char *num);
void	sort(char *num, int n);

void	ft_print_comb(void)
{
	char	arr_num[5];
	char	*num;

	num = arr_num;
	num[0] = '0';
	sort(num, 0);
	num[3] = ',';
	num[4] = ' ';
	solution(num);
}

void	sort(char *num, int n)
{
	if (n == 0)
	{
		num[1] = num[0] + 1;
		num[2] = num[1] + 1;
	}
	if (n == 1)
		num[2] = num[1] + 1;
}

void	solution(char *num)
{
	write(1, num, 5);
	if (num[2] < '9')
	{
		num[2] += 1;
		solution(num);
	}
	else if (num[2] == '9' && num[1] < '8')
	{
		num[1] += 1;
		sort(num, 1);
		solution(num);
	}
	if (num[1] == '8' && num[0] < '7')
	{
		num[0] += 1;
		sort(num, 0);
		if (num[0] == '7')
			write(1, num, 3);
		else
			solution(num);
	}
}

int main(void)
{
	ft_print_comb();
}
