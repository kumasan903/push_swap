/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standard_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawanis <skawanis@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:51:36 by skawanis          #+#    #+#             */
/*   Updated: 2023/10/13 01:43:33 by skawanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case_2(char **argv)
{
	if (ft_atoi(argv[1]) > ft_atoi(argv[2]))
		ft_putendl_fd("ra", STDOUT_FILENO);
	return (0);
}

int	case_3(char **argv)
{
	//2 1 3
	if (ft_atoi(argv[1]) > ft_atoi(argv[2]) && ft_atoi(argv[1]) < ft_atoi(argv[3]))
		ft_putendl_fd("sa", STDOUT_FILENO);
	//3 2 1
	if (ft_atoi(argv[1]) > ft_atoi(argv[2]) && ft_atoi(argv[2]) > ft_atoi(argv[3]))
	{
		ft_putendl_fd("sa", STDOUT_FILENO);
		ft_putendl_fd("rra", STDOUT_FILENO);
	}
	//3 1 2
	if (ft_atoi(argv[1]) < ft_atoi(argv[2]) && ft_atoi(argv[1]) > ft_atoi(argv[3]))
		ft_putendl_fd("ra", STDOUT_FILENO);
	//1 3 2
	if (ft_atoi(argv[1]) < ft_atoi(argv[2]) && ft_atoi(argv[1]) < ft_atoi(argv[3]))
	{
		ft_putendl_fd("sa", STDOUT_FILENO);
		ft_putendl_fd("ra", STDOUT_FILENO);
	}
	//2 3 1
	if (ft_atoi(argv[1]) < ft_atoi(argv[2]) && ft_atoi(argv[1]) > ft_atoi(argv[3]))
		ft_putendl_fd("rra", STDOUT_FILENO);
	return (0);
}
