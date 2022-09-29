/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_boxess.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:58:49 by ofadahun          #+#    #+#             */
/*   Updated: 2022/09/25 17:14:37 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_repetition(int map[4][4], int position, int nbr);
int case_row_col(int map[4][4], int position, int clues[16]);

int	place_boxes(int map[4][4], int clues[16], int position)  //
{
	int size;
	
	if (position == 16)  //once this functions runs 16 times...it returns which means all necessary conditions have been met.
		return (1);  
	size = 0;  // this represent the boxes size , 1, 2, 3, 4 . you can see we did a pre incrementation in the while loop.
	while (++size <= 4)
	{
		if (check_repetition(map, position, size) == 0) // check for repetition and returns 0 if no repetition
		{
			map[position / 4][position % 4] = size;  //sets value to 1 at first iteration
			if (case_row_col(map, position, clues) == 0)
			{
				if (place_boxes(map, clues, position + 1) == 1)
					return (1);
			}
			else
			{
				map[position / 4][position % 4] = 0;
			}
		}
	}
}