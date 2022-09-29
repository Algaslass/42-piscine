/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:01:35 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/28 13:02:36 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*t;
	int	i;

	if (min >= max)
		return (NULL);
	max -= min;
	t = malloc(max * sizeof(int));
	if (!t)
		return (NULL);
	i = -1;
	while (++i < max)
		t[i] = min + i;
	return (t);
}

void    pprint_test(int *test, int size)
{
    int i;

    for (i = 0; i < size - 1; i++)
    {
        printf("%d - ", test[i]);
    }
    if (size > 0)
        printf("%d\n", test[size - 1]);
}

int main ()
{
    int *test;
    test=ft_range(1,11);
    pprint_test(test,10);
}