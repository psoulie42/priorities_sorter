/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:30:50 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/03 15:11:03 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ptr;
	while (i < n)
	{
		str[i] = (unsigned char)val;
		i++;
	}
	return (ptr);
}

/* int main ()
{
	char a[8];
	int val = '0';
	int n = 8;
	printf("%s\n", ft_memset(a, val, n));
} */