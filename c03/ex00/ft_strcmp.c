/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:08:51 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/24 10:59:10 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && s1[x] == s2[x])
	{
		x += 1;
	}
	return (s1[x] - s2[x]);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char str1[] = "abcd";
//   	char str2[] = "abCd";
//   	char str3[] = "abcd";
//   	int result;

//   	result = strcmp(str1, str2);
//   	printf("strcmp(str1, str2) = %d\n", result);

//   	result = strcmp(str1, str3);
//   	printf("strcmp(str1, str3) = %d\n", result);

//   	return (0);
// }
