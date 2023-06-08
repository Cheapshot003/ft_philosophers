/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 19:12:47 by ole               #+#    #+#             */
/*   Updated: 2023/04/24 14:44:21 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philosophers.h"

int	main(int argc, char **argv)
{
	t_data	data;
	pthread_t tid;

	if (argc < 5 || argc > 6)
		epic_fail("Wrong arguments LOL\n");
	if (init_data(&data, argc, argv))
		fail();
	if (init_threads(&data))
		fail();
}