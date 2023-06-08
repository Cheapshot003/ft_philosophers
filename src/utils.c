/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:49:14 by ole               #+#    #+#             */
/*   Updated: 2023/03/12 21:10:55 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philosophers.h"

int	ft_atoi(char *str)
{
	int	num;
	int	neg;

	num = 0;
	neg = 1;
	if (*str == '-')
	{
		neg *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		num *= 10;
		num += *str++ - '0';
	}
	return (num * neg);
}

void	epic_fail(const char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	fail();
}