/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:02:41 by tmalheir          #+#    #+#             */
/*   Updated: 2024/01/10 09:15:30 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the string ’str’ to the given file descriptor.*/

void	ft_putstr_fd(char *str, int fd)
{
	int	idx;

	if (str)
	{	
		idx = 0;
		while (str[idx])
		{
			write(fd, &str[idx], 1);
			idx++;
		}
	}
}
