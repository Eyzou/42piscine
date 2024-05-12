/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:42:00 by ehamm             #+#    #+#             */
/*   Updated: 2023/11/28 17:16:09 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	if (n < 1)
		return (0);
	while (s1[i] == s2[i] && s1[i] && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "kikooo";
	char	s2[] = "coucouuuudsfdsgu";
	char	s3[] = "coucouuuuuuu";
	
	int	n = 10;

	printf("s1 > s2 = %d  %d\n", ft_strncmp(s1,s2,n), strncmp(s1,s2,n));
	printf("s1 < s2 = %d  %d\n", ft_strncmp(s2,s1,n), strncmp(s2,s1,n));
	printf("s1 = s2 = %d  %d\n", ft_strncmp(s3,s2,n), strncmp(s3,s2,n));
}*/
