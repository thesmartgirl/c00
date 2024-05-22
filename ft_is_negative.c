/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:53:57 by ataan             #+#    #+#             */
/*   Updated: 2024/04/30 15:54:00 by ataan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	res;

	if (n < 0)
	{
		res = 'N';
		write(1, &res, 1);
	}
	else
	{
		res = 'P';
		write(1, &res, 1);
	}
}
