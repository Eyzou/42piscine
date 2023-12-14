/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:11:39 by ehamm             #+#    #+#             */
/*   Updated: 2023/12/13 10:11:52 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

int		ft_atoi(char *str);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	calculator(int num1, char operator, int num2);
char	ft_find_operator(char *str);
#endif
