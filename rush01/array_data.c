/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 14:54:19 by ofadahun          #+#    #+#             */
/*   Updated: 2022/09/25 18:46:36 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str);
int	ft_strlen(char *str);

int	check_numbers(int argc, char **argv) // this checks against the length of the parameters given ,if length not 31, they are 31 cos of spaces, and if argc not 2.
{
	if (argc != 2 && ft_strlen(argv[1]) != 31)
		return (1);
	return (0);
}

int	*read_numbers(char *str) // this reads the numbers from the string we got as parameter
{
	int pos;
	int pos_2;
	int *ints;

	ints = malloc(sizeof(int) * 4 * 4);
	if (ints == NULL)   //just incase the memory doesnt get allocated.
		return (0);
	pos = -1;
	pos_2 = 0;
	while (str[++pos] != '\0')  // this is putting the numbers from the string passed as parameter to the ints array.
	{
		if (str[pos] >= '0' && str[pos] <= '9')
		{
			ints[pos_2++] = ft_atoi(str + pos);
		}
	}
	return (ints);
}