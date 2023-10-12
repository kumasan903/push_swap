/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawanis <skawanis@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:48:15 by skawanis          #+#    #+#             */
/*   Updated: 2023/10/13 00:48:23 by skawanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_str_isdigit(char *str)
{
	size_t	i;

	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_str_isint(char *str)
{
//	char *int_max = ft_itoa(INT_MAX);
//	char *int_min = ft_itoa(INT_MIN);

	if (ft_str_isdigit(str) != 1)
		return (0);
	if (ft_strlen_s(str) > 11 || (ft_strlen_s(str) > 10 && str[0] != '-'))
		return (0);
	return (1);
}
