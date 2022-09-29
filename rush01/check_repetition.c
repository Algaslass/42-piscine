/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repetition.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:44:37 by ofadahun          #+#    #+#             */
/*   Updated: 2022/09/25 18:23:08 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_repetition(int map[4][4], int position, int nbr)  //this functions checks against repetition
{
	int	pos;

	pos = -1;
	while(++pos < position / 4)  // this while loop wont run until position gets incremented till 4.
	{
		if (map[pos][position % 4] == nbr)  // checks for the row 
			return (1);
	}
	while (++pos < position % 4) // also wont run until the position gets incremented till 4. because we actually wouldnt need to check against repetition until we have completed the first 4 filling out of the map.
	{
		if (map[position / 4][pos] == nbr) // checks for the column
			return (pos);
	}
	return (0);
}