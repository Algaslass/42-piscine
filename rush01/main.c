/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:45:12 by ofadahun          #+#    #+#             */
/*   Updated: 2022/09/25 19:39:41 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_numbers(int argc, char **argv);
int		*read_numbers(char *str);
int		place_boxes(int map[4][4], int clues[16], int position);
void	display_boxes(int map[4][4]);
void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int map[4][4];
	int	*clues;
	int	pos;
	int	pos_2;

	pos = -1;
	while (++pos < 4)   // this fills the array with 0's
	{
		pos_2 = -1;
		while (++pos < 4)
			map[pos][pos_2] = 0;
	}
	if (check_numbers(argc, argv) == 1)  //if argument isnt valid ...not the right length and argc not the right count
	{
		return (0);
	}
	clues = read_numbers(argv[1]); // this gets the integer values from the arg passed.
	if (place_boxes(map, clues, 0) == 1)
	{
		display_boxes(map);
	}
	else
	{
		ft_putstr("Error\n");
	}
	return(0);
}