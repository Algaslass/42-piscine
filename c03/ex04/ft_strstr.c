/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:00:37 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/27 19:54:34 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[y] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		while (str[x + y] == to_find[y] && str[x + y] != '\0')
			y++;
		if (to_find[y] == '\0')
			return (str + x);
		x++;
		y = 0;
	}
	return (0);
}

#include <stdio.h>

int main()
{
	char str[] = "Tomorrow will be a good day";
	char to_find[] = "will";
	printf("%s\n", ft_strstr(str, to_find));
}
