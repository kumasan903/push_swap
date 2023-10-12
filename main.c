/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawanis <skawanis@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 03:50:30 by skawanis          #+#    #+#             */
/*   Updated: 2023/10/13 00:56:51 by skawanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input_error(int argc, char **argv)
{
	size_t	i;

	if (argc == 1)
		exit(0);
	i = 1;
	while (argv[i])
	{
		if (!ft_str_isint(argv[i]))
		{
			ft_putendl_fd("Error", STDOUT_FILENO);
			exit(1);
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	check_input_error(argc, argv);
	if (argc <= 2)
		return (0);
	if (argc == 3)
		return (case_2(argv));
	if (argc == 4)
		return (case_3(argv));
	return (0);
}
