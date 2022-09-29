/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_col_row.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:05:16 by ofadahun          #+#    #+#             */
/*   Updated: 2022/09/25 18:20:34 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int col_up(int map[4][4], int position, int clues[16]);
int	col_down(int map[4][4], int position, int clues[16]);
int	row_left(int map[4][4], int position, int clues[16]);
int	row_right(int map[4][4], int position, int clues[16]);

int	case_row_col(int map[4][4], int position, int clues[16])
{
	if (row_left(map, position, clues) == 1)
		return (1);
	if (row_right(map, position, clues) == 1)
		return (1);
	if (col_down(map, position, clues) == 1)
		return (1);
	if (col_up(map, position, clues) == 1)
		return (1);
	return (0);
}