/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:07:28 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/11 13:54:04 by psoulie          ###   ########.fr       */
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

char	*ft_substr(const char *s, unsigned int start, size_t l)
{
	char	*n;
	size_t	i;

	i = 0;
	if (len((char *)s) < l)
		l = len((char *)s);
	n = malloc((l + 1) * sizeof(char));
	if (!n)
		return (NULL);
	while (len((char *)s) > start && s[start + i] && i < l)
	{
		n[i] = s[start + i];
		i++;
	}
	n[i] = 0;
	return (n);
}

/* int main()
{
	char s[] = "on va tenter tkt";
	printf("%s\n", ft_substr(s, 17, 6));
	free(ft_substr(s, 17, 6));
} */