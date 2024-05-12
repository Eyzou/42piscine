/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:48:39 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/04 09:35:14 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
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

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (new == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*int	main(void)
{
	char *str = "KIKOiiiiiiiiiiiiiiiiiiiio";

	printf("%s \n", ft_strdup(str));
	printf("%s \n", strdup(str));
}*/

/*int	main(int argc, char **argv)
{
	argc = 1;
	printf("%s \n", ft_strdup(argv[1]));
	printf("%s \n", strdup(argv[1]));
}*/
