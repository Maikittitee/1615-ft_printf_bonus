/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maikittitee <maikittitee@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:35:53 by ktunchar          #+#    #+#             */
/*   Updated: 2022/10/23 15:30:07 by maikittitee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H


#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

typedef struct s_what
{
	int	index;
	int	total_count;
    int	return_count;
    char print_type;
	int width;
    int minus;
    int	zero;
	int dot;
	int hash;
	int space;
	int plus;
} t_what;

int ft_printf(const char *str, ...);
void ft_putchar_count(char c, t_what stu);
// int ft_putnbr_d_count(int n);
// int	ft_putnbr_x_count(unsigned long long n);
// int	ft_putnbr_ux_count(unsigned int n);
// int	ft_putnbr_u_count(unsigned int n);
// int ft_putstr_count(const char *str);
// int	ft_pointer_count(unsigned long long n);

#endif
