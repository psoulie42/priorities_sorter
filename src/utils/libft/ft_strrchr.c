/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:46:14 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/10 16:46:25 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	cc;

	cc = c;
	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == cc)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}

/* int main()
{
	char str[] = "yowwo";
	printf("%s\n", ft_strrchr(str, 'w'));
} */