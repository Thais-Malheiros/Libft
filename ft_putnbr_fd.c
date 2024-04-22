/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:02:08 by tmalheir          #+#    #+#             */
/*   Updated: 2024/01/10 09:14:39 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the integer ’nbr’ to the given file descriptor.*/

void	ft_putnbr_fd(int nbr, int fd)
{
	char	n_char;
	long	n_long;

	n_long = nbr;
	if (n_long < 0)
	{
		write(fd, "-", 1);
		n_long = -n_long;
	}
	if (n_long >= 0 && n_long <= 9)
	{
		n_char = n_long + '0';
		write(fd, &n_char, 1);
	}
	else
	{
		ft_putnbr_fd(n_long / 10, fd);
		ft_putnbr_fd(n_long % 10, fd);
	}
}
