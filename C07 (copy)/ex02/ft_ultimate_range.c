/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:05:19 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/04 15:41:42 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (tab == NULL)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*ptr;	
	int	**range;

	range = &ptr;
	min = -50;
	max = -5;

	printf("%d \n", ft_ultimate_range(range,min,max));
}*/
