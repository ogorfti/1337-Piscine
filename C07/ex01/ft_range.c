/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:30:14 by ogorfti           #+#    #+#             */
/*   Updated: 2022/04/10 17:14:42 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	range = (int *)malloc(sizeof(int *) * (max - min));
	if (min >= max || range == NULL)
	{
		range = NULL;
		return (range);
	}
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
