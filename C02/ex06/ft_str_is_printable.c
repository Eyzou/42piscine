/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:22:24 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/27 10:56:32 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 31) && (str[i] < 127))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*int main(void)
{
	char str[] = "";
	char str1[] = {'\0'};
	char str2[] = {'S','a','l','u','t', 13};
	printf("%d",ft_str_is_printable(str));
	printf("%d",ft_str_is_printable(str1));
	printf("%d",ft_str_is_printable(str2));
	return (0);
}*/
