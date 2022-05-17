/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:30:39 by ogorfti           #+#    #+#             */
/*   Updated: 2022/03/24 22:11:16 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	number;

	number = nb;
	if (number == -2147483648)
	{
		ft_putchar('-');
		ft_putchar((2) + '0');
		number = 147483648;
	}
	if (number >= 0 && number < 10)
	{
		ft_putchar(number + '0');
	}
	if (number < 0)
	{
		ft_putchar('-');
		ft_putnbr(number * (-1));
	}
	else if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}
