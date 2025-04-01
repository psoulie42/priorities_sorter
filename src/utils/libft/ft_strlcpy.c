/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:30:57 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/09 13:50:40 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (len((char *)src));
	while (src[i] && i < size - 1)
	{
		dest[i] = (char)src[i];
		i++;
	}
	dest[i] = 0;
	return (len((char *)src));
}

/* int main()
{
	char src[] = "Hello";
	char dest[] = "World";
	int size = 4;
	printf("%zu\n%s\n%s\n", ft_strlcpy(dest, src, size), dest, src);
} */