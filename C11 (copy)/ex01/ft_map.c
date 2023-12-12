/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:28:48 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/11 10:01:30 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*int	ft_is_prime(int nb)
{
	int	i;

	i = 2 ;
	if (nb < 2)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*new;

	i = 0;
	new = (int *)malloc(sizeof(int) * length);
	if (new == NULL)
		return (NULL);
	while (i < length)
	{
		new[i] = f(tab[i]);
		i++;
	}
	return (new);
}

/*int	main(void)
{
	int	tab[] = {1,4,9,8,7,6,3,2,1,4,7};
	int length;
	int	*res;
	int	i;

	i = 0;
	length = 10;
	res = ft_map(tab,length,&ft_is_prime);
	while (i < length)
	{
		printf("%d \n",res[i]);
		i++;
	}
}*/
