/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:55:58 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/12 14:26:23 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	cmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int	get_tab_size(char **tab)
{
	int	n;

	n = 0;
	while (tab[n])
		++n;
	return (n);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		size;
	char	*tmp;

	size = get_tab_size(tab);
	i = 1;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(int argc, char **argv)
{
	int	i;

	ft_advanced_sort_string_tab(argv, &cmp);
	i = 0;
	while (++i < argc)
		printf("%s\n", argv[i]);
}*/
