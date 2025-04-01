/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:57:50 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/09 16:31:05 by psoulie          ###   ########.fr       */
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

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i != size)
		dest[i + j] = '\0';
	return (i + len((char *)src));
}

/* int main()
{
	char src[] = "Hello";
	char dest[] = "World!";
	int size = 11;
	printf("%s\n%zu\n%s\n", src, ft_strlcat(dest, src, size), dest);
} */