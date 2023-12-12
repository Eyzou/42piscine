/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:51:01 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/05 15:06:49 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_full_len(char **strs, int size, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (size - 1) * ft_strlen(sep)+ 1;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *)malloc (sizeof(char) * ft_full_len(strs, size, sep));
	if (new == NULL)
	{
		new = NULL
		return (new);
	}
	if (size == 0)
		return (new);
	while (size > i)
	{
		new = ft_strcat(new, strs[i]);
		if (i < size - 1)
			new = ft_strcat(new, sep);
		i++;
	}
	return (new);
}

int	main(void)
{
	char    *tab[4];
	tab[0] = "Ceci";
	tab[1] = "est";
	tab[2] = "un";
	tab[3] = "test";
	printf("%s", ft_strjoin(2, tab, "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj"));
	printf("%d", ft_full_len(tab,2 ,", "));
	return (0);
}
