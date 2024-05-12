/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:47:09 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/03 18:12:38 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min) + 1);
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}	
	return (tab);
}

/*int	main(void)
{
	int	min;
	int	max;	
	int	i;
	int	*tab;

	min = -21;
	max = 21;
	tab = ft_range(min,max);
		
	for (i = 0; i < (max - min ); i++)
	{
		printf("%d \n",tab[i]);
	}
}*/
