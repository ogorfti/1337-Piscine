/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 19:40:25 by ogorfti           #+#    #+#             */
/*   Updated: 2022/03/30 17:14:37 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	cpt;
	unsigned int	i;

	cpt = 0;
	while (dest[cpt] != '\0')
		cpt++;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[cpt + i] = src[i];
		i++;
	}
	dest[cpt + i] = '\0';
	return (dest);
}
