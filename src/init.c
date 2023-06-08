/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 20:44:06 by ole               #+#    #+#             */
/*   Updated: 2023/04/24 14:48:12 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philosophers.h"

int	init_data(t_data *data, int argc, char **argv)
{
	parse_arg(data, argc, argv);
	check_args(data, argc);
	return (0);
}

int	check_args(t_data *data, int ac)
{
	if (data->num_phil <= 0)
		epic_fail("Error in <Number of philosophers>\n");
	if (data->time_die <= 0)
		epic_fail("Error in <Time to die>\n");
	if (data->time_eat <= 0)
		epic_fail("Error in <Time to eat>\n");
	if (data->time_sleep <= 0)
		epic_fail("Error in <Time to sleep>\n");
	if (ac == 6 && data->must_eat <= 0)
		epic_fail("Error in <Number of times philosopher must eat>\n");
	return (0);
}

void init_threads(t_data *data)
{
	int num;

	num = data->num_phil;
	while (num != 0)
	{
		pthread_create(data->tid, NULL, philo, NULL);
		num--;
	}
}	

void	parse_arg(t_data *data, int argc, char **argv)
{
		data->num_phil = ft_atoi(argv[1]);
		data->time_die = ft_atoi(argv[2]);
		data->time_eat = ft_atoi(argv[3]);
		data->time_sleep = ft_atoi(argv[4]);
		if (argc == 6)
			data->must_eat = ft_atoi(argv[5]);
}