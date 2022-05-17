/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:48:48 by ogorfti           #+#    #+#             */
/*   Updated: 2022/04/10 17:17:00 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(*arr) * (max - min));
	if (arr == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < max - min)
		{
			arr[i] = min + i;
			i++;
		}
		*range = arr;
		return (i);
	}
}
