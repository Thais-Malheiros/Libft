/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:48:09 by tmalheir          #+#    #+#             */
/*   Updated: 2023/11/10 11:40:51 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the character ’c’ to the given file descriptor.*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
