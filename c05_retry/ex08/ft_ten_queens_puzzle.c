/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumjang <sumjang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:32:56 by sumjang           #+#    #+#             */
/*   Updated: 2021/10/26 15:33:57 by sumjang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		abs(int n);
int		promising(int *chess, int *row);
void	queen(int *chess, int *row, int *col);

int	ft_ten_queens_puzzle(void)
{
	int	*chess;
	int	*row;
	int	*col;
	int	c;
	int	r;
	int	ch[11];

	chess = ch;
	row = &r;
	col = &c;
	*row = 0;
	*col = 0;
	queen(chess, row, col);
	return (0);
}

void	queen(int *chess, int *row, int *col)
{
	if (*col == 5)
	{
		*row += 1;
		return ;
	}
	while (*col < 10)
	{
		while (*row < 10)
		{
			chess[*col] = *row;
			if (promising(chess, row))
			{
				*col += 1;
				queen(chess, row, col);
			}
			*row += 1;
		}
	}
}

int	promising(int *chess, int *row)
{
	int	idx;

	idx = 0;
	while (idx < *row)
	{
		if (chess[*row] == chess[idx] \
				|| *row - idx == abs(chess[*row] - chess[idx]))
			return (0);
	}
	return (1);
}

int	abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}
