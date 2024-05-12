/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:27:56 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/27 11:17:19 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (!(str[i - 1] >= 65 && str[i - 1] <= 90))
		{
			if (!(str[i -1] >= 97 && str[i - 1] <= 122))
			{
				if (!(str[i - 1] >= 48 && str[i - 1] <= 57))
				{
					if (str[i] >= 97 && str[i] <= 122)
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}
		i++;
	}	
	return (str);
}

/*int	main(void)
{
	char str[80] = "salut, comment 42mots quarante-deux; cinquante+et+un \n";
	printf("%s", str);
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/
