/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:24:10 by tmalheir          #+#    #+#             */
/*   Updated: 2024/01/10 09:21:41 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applies the function ’f’ on each character of the string passed as argument, 
passing its index as first argument. Each character is passed by address to ’f’ 
to be modified if necessary.*/

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	unsigned int	idx;

	idx = 0;
	if (str || f)
	{
		while (str[idx])
		{
			f(idx, &str[idx]);
			idx++;
		}
	}
}
