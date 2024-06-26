/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:15:27 by tmalheir          #+#    #+#             */
/*   Updated: 2024/01/10 09:08:39 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The memchr() function scans the initial n bytes of the memory area pointed 
to by str for the first instance of c.  Both c and the bytes of the memory area 
pointed to by str are interpreted as unsigned char.
The memchr() and memrchr() functions return a pointer to the matching byte or 
NULL if the character does not occur in the given memory area.*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			idx;

	ptr = (unsigned char *)str;
	idx = 0;
	while (idx < n)
	{
		if (ptr[idx] == (unsigned char)c)
			return ((unsigned char *)&str[idx]);
		idx++;
	}
	return (NULL);
}
