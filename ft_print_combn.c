/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 11:13:42 by ataan             #+#    #+#             */
/*   Updated: 2024/05/22 11:31:08 by ataan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *comb, int n)
{
	int	i;

	i = 0;
	while (++i < n)
		if (comb[i - 1] >= comb[i])
			return ;
	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + 48);
		i++;
	}
	if (comb[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	comb[10];

	if (n > 9 || n < 1)
		return ;
	i = -1;
	while (++i < n)
		comb[i] = i;
	while (comb[0] <= (10 - n))
	{
		print(comb, n);
		comb[n - 1]++;
		i = n - 1;
		while (i)
		{
			if (comb[i] > 9)
			{
				comb[i - 1]++;
				comb[i] = 0;
			}
			i--;
		}
	}
}
