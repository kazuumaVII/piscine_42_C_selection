/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frfrance <frfrance@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:35:40 by frfrance          #+#    #+#             */
/*   Updated: 2019/10/30 18:39:22 by frfrance         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
	{
		while (av[1][i] != '\0')
			write(1, &av[1][i++], 1);
	}
	write(1, "\n", 1);
}