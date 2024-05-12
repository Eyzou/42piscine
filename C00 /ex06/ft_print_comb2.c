/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:41:32 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/03 14:02:55 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar('0');
		ft_putchar(nb + '0');
		return ;
	}
	ft_putchar(nb / 10 + '0');
	ft_putchar(nb % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	nb[2];

	nb[0] = 0;
	while (nb[0] < 99)
	{
		nb[1] = nb[0] + 1;
		while (nb[1] < 100)
		{
			if (nb[1] > nb[0])
			{
				ft_putnbr(nb[0]);
				ft_putchar(' ');
				ft_putnbr(nb[1]);
				if (!(nb[0] == 98 && nb[1] == 99))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			nb[1]++;
		}
		nb[0]++;
	}
}

/*int main(void)
{
	ft_print_comb2();
}*/
