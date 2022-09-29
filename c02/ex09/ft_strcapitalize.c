/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 02:13:25 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/20 19:19:43 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (y == 0 && (str[x] >= 'a' && str[x] <= 'z'))
		{
			str[x] -= 32;
			y++;
		}
		else if (y > 0 && (str[x] >= 'A' && str[x] <= 'Z'))
			str[x] += 32;
		else if ((str[x] < '0') || (str[x] > '9' && str[x] < 'A')
			|| (str[x] > 'Z' && str[x] < 'a') || (str[x] > 'z'))
			y = 0;
		else
			y++;
		x++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux;";
// 	char str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%c";
// 	printf("%s\n", ft_strcapitalize(str));
// 	printf("%s\n", ft_strcapitalize(str1));
// 	return (0);
// }
