/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musoysal <musoysal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 21:41:49 by musoysal          #+#    #+#             */
/*   Updated: 2024/02/14 21:45:38 by musoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	s = malloc(sizeof(strs));
	i = 0;
	k = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			j = 0;
			while (strs[i][j] != '\0')
				s[k++] = strs[i][j++];
			j = 0;
			while (sep[j] != '\0' && i < size - 1)
				s[k++] = sep[j++];
			i++;
		}
	}
	s[k] = '\0';
	return (s);
}
