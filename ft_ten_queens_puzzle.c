/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:59:32 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/06 18:59:32 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_solution(int board[10])
{
	char c;
	int i;
	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int ft_is_safe(int board[10], int row, int col)
{
	int i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row ||
			board[i] - i == row - col ||
			board[i] + i == row + col)
			return (0);
		i++;
	}
	return (1);
}

void ft_solve(int board[10], int col, int *count)
{
	int row;

	if (col == 10)
	{
		ft_print_solution(board);
		(*count)++;
		return;
	}
	row = 0;
	while (row < 10)
	{
		if (ft_is_safe(board, row, col))
		{
			board[col] = row;
			ft_solve(board, col + 1, count);
		}
		row++;
	}
}

int ft_ten_queens_puzzle(void)
{
	int board[10];
	int count;

	count = 0;
	ft_solve(board, 0, &count);
	return (count);
}