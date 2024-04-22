/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:09:39 by tmalheir          #+#    #+#             */
/*   Updated: 2024/01/10 09:11:36 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The  memset()  function fills the first n bytes of the memory area pointed 
to by str with the constant byte c.The memset() function returns a pointer to 
the memory area str.*/

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			idx;

	ptr = (unsigned char *)str;
	idx = 0;
	while (idx < n)
	{
		ptr[idx] = (unsigned char)c;
		idx++;
	}
	return (ptr);
}
