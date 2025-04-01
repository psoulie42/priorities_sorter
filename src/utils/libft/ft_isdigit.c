/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:05:09 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/03 15:10:39 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	else
		return (0);
}

/* int main()
{
	char a = '0';

	if (ft_isdigit(a))
		printf("ok");
	else
		printf("no ok");
} */