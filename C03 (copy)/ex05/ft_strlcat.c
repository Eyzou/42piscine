/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:25:13 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/08 09:56:17 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	result;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	result = len_src;
	len_src = 0;
	while (src[len_src] != '\0' && len_dest + 1 < size)
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	dest[len_dest] = '\0';
	if (size < len_dest)
		result = result + size;
	else
		result = result + len_dest;
	return (result);
}

int	main(void)
{
	char dest[20] = "123";
	char src[] = "4567890";
	unsigned int size = 6;

	printf("result = %s\n%d-----\n", dest, ft_strlcat(dest, src, size));
	printf("result = %s\n%zu----\n", dest, strlcat(dest, src, size));
	return (0);
}
