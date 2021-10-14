/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 01:39:46 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/14 17:50:46 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	sort(char *num, int n, int idx);
void	plus(char *num, int n, int idx, char ch);

void	ft_print_combn(int n)
{
	char	pnum[11];
	char	*num;

	num = pnum;
	num[0] = '0';
	num[n] = ',';
	num[n + 1] = ' ';
	sort(num, n, 1);
	plus(num, n, n - 1, 'p');
}

void	plus(char *num, int n, int idx, char ch)
{
	if (num[0] == '9' - n + 1 && ch == 'p')
	{
		write(1, num, n);
		return ;
	}
	else if (ch != 'n')
		write(1, num, n + 2);
	if (num[idx] < '9' - (n - idx - 1))
	{
		num[idx] += 1;
		plus(num, n, idx, 'p');
	}
	else if (num[idx] == '9' - (n - idx - 1) && num[idx - 1] < num[idx] - 1)
	{
		num[idx - 1] += 1;
		sort(num, n, idx);
		plus(num, n, n - 1, 'p');
	}
	else if (num[idx] == '9' - (n - idx - 1) && num[idx - 1] == num[idx] - 1)
		plus(num, n, idx - 1, 'n');
}

void	sort(char *num, int n, int idx)
{
	n -= idx;
	while (n-- > 0)
	{
		num[idx] = num[idx - 1] + 1;
		idx += 1;
	}
}

int	main(void)
{
	ft_print_combn(3);
}
