/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:09:02 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/07 09:44:56 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}


char	**ft_split(char *str, char *charset)
{
 	int	i;
	char	*new;
	int	len

	len = ft_strlen(str);
	i = 0;
	new = (char *)malloc (sizeof(char) * len )

	while (str[i] = charset[i])
 
}
