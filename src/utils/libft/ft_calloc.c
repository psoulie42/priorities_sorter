/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:09:41 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/03 15:31:33 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*obj;

	i = 0;
	obj = malloc(count * size);
	if (!obj)
		return (NULL);
	while (i < count * size)
	{
		((char *)obj)[i] = 0;
		i++;
	}
	return (obj);
}
