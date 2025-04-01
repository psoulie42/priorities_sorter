/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:19:22 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/10 15:02:14 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*work(int i, int minus, long int nb, char *str)
{
	while (i >= minus)
	{
		str[i] = ((nb % 10) + 48);
		nb /= 10;
		i--;
	}
	if (minus)
		str[i] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			minus;
	long int	nb;

	nb = n;
	minus = 0;
	if (nb < 0)
	{
		nb *= -1;
		minus = 1;
	}
	i = count(nb) + minus;
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = 0;
	i--;
	if (nb == 0)
		str[i] = '0';
	return (work(i, minus, nb, str));
}

/* int main()
{
	int nb = 0;
	printf("%s\n", ft_itoa(nb));
} */
