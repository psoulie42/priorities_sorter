/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoulie <psoulie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:03:55 by psoulie           #+#    #+#             */
/*   Updated: 2024/10/10 16:13:20 by psoulie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*st;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i <= j)
		i++;
	if (i > j)
		return (ft_strdup(s1 + j + 1));
	while (ft_strchr(set, s1[j]) && j >= 0)
		j--;
	st = malloc((j - i + 2) * sizeof(char));
	if (!st)
		return (NULL);
	ft_strlcpy(st, &s1[i], j - i + 2);
	return (st);
}

/* int main()
{
	char s1[] = "   	       				";
	char set[] = " ";
	printf("%s\n", ft_strtrim(s1, set));
	free(ft_strtrim(s1, set));
} */