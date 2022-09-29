/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:39:47 by ofadahun          #+#    #+#             */
/*   Updated: 2022/09/25 18:37:36 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str) // just needed to print string characters
{
	int	pos;

	pos = -1;
	while (str[++pos] != '\0')
		ft_putchar(str[pos]);
}

void    ft_putnbr(int nb) // this is just needed to print numbers
{
	if (nb == -2147483648)
	{
			ft_putchar('-');
			ft_putchar('2');
			nb = 147483648;
	}
	if (nb < 0)
	{
			ft_putchar('-');
			nb = nb * -1;
	}
	if (nb >= 10)
	{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
	}
	else
	{
			ft_putchar(nb + 48);
	}
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	ft_atoi(char *str)
{
	int	pos;
	int	result;
	int	sign;

	pos = -1;
	result = 0;
	sign = 1;
	while (str[++pos] == ' ' || str[pos] == '\t' || str[pos] \
	== '\r' || str[pos] == '\n' || str[pos] == '\v' || str[pos] == '\f') // This are used to check against all whitespaces..
		continue ;
	pos -= 1;
	while (str[++pos] == '-' || str[pos] == '+')  //used to check for signs - * - is +, - * - * - is -.
	{
		if (str[pos] == '-')
			sign *= -1;
	}
	pos -= 1;
	while (str[++pos] >= '0' && str[pos] <= '9')  //used to check for digits and once digits, the program stops
	{
		result *= 10;  // this is used for conversion for unit, tense, hundredth. 1234 1+2+3+4 = 9
		result += str[pos] - '0'; // this is used to turn it from a char in ascii to a real digit cos we need it as an integer
	}
	result *= sign;
	return (result);
}