/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:36:12 by tmalheir          #+#    #+#             */
/*   Updated: 2023/11/10 11:08:02 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Checks  for  a digit (0 trough 9). The values returned are nonzero if the 
character c falls into the tested class, and zero if not.*/

int	ft_isdigit(int c)
{
	if (c >= '0' & c <= '9')
		return (1);
	else
		return (0);
}
