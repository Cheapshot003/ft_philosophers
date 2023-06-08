/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:08:12 by ole               #+#    #+#             */
/*   Updated: 2023/04/24 14:46:29 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <unistd.h>
# include <stdlib.h>
# include <pthread.h>
#include <stdio.h>
typedef struct s_data
{
	int	num_phil;
	int	time_die;
	int time_eat;
	int	time_sleep;
	int	must_eat;
	pthread_t *tid;

}	t_data;

int		init_data(t_data *data, int argc, char **argv);
int		ft_atoi(char *str);
void	parse_arg(t_data *data, int argc, char **argv);
void	epic_fail(const char *str);
int		check_args(t_data *data, int ac);
int		fail();
void	*philo(void *arg);

#endif
