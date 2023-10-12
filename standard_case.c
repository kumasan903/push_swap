/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   standard_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawanis <skawanis@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:51:36 by skawanis          #+#    #+#             */
/*   Updated: 2023/10/13 00:58:50 by skawanis         ###   ########.fr       */
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
	(void)argv;
	return (0);
}
