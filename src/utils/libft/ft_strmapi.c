/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:57:47 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/09 13:53:52 by psoulie          ###   ########.fr       */
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

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ns;

	i = 0;
	ns = malloc((len((char *)s) + 1) * sizeof(char));
	if (!ns)
		return (NULL);
	while (s[i])
	{
		ns[i] = f(i, s[i]);
		i++;
	}
	ns[i] = 0;
	return (ns);
}

/* char focntion(unsigned int i, char a)
{
	return a - 32;
}

int main()
{
	char str[] = "hellooo";
	printf("%s\n", ft_strmapi(str, focntion(unsigned int i, char a)));
} */