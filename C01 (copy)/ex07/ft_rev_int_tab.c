/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:32:28 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/30 18:46:30 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}
/*int	main(void)
{
	int a[5] = {2,5,3,1,4};
	ft_rev_int_tab(a, 5);
	printf("Input: 2,5,3,1,4\n Output:%d,%d,%d,%d,%d",a[0],a[1],a[2],a[3],a[4]);
}*/
