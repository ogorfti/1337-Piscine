/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 21:39:15 by ogorfti           #+#    #+#             */
/*   Updated: 2022/04/10 23:56:59 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	int	n;

	n = nbr;
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar((2) + '0');
		n = 147483648;
	}
	if (n >= 0 && n < 10)
		ft_putchar(n + '0');
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * (-1));
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int main()
{
	int nb = 46464;
	ft_putnbr(nb);
}