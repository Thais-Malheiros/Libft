/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:26:07 by tmalheir          #+#    #+#             */
/*   Updated: 2023/11/09 12:00:48 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx_b;
	size_t	idx_l;

	if (!*little)
		return ((char *)big);
	idx_b = 0;
	while (big[idx_b] && (idx_b < len))
	{
		if (big[idx_b] == little[0])
		{
			idx_l = 0;
			while (big[idx_b + idx_l] == little[idx_l]
				&& idx_b + idx_l < len)
			{
				if (little[idx_l + 1] == '\0')
					return ((char *)&big[idx_b]);
				idx_l++;
			}
		}
		idx_b++;
	}
	return (NULL);
}
