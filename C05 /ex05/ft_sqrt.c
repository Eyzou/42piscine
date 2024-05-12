/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:19:27 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/29 15:06:48 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 0 && (i * i) <= nb)
	{	
		if (i * i == nb)
			return (i);
		if (i > 46340)
			return (0);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int	nb1;
	int	nb2;
	int	nb3;	
	int	nb4;

	nb1 = 25;
	nb2 = 0;
	nb3 = -25;
	nb4 = 100;
	printf("%i \n", ft_sqrt(nb1));
	printf("%i \n", ft_sqrt(nb2));
	printf("%i \n", ft_sqrt(nb3));
	printf("%i \n", ft_sqrt(nb4));
	return(0);
}*/
