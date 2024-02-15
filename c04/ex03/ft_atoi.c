/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musoysal <musoysal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 22:11:45 by musoysal          #+#    #+#             */
/*   Updated: 2024/02/08 22:11:45 by musoysal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	result = 1;
	sign = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
			result *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		sign = sign * 10 + *str - 48;
		str++;
	}
	return (result * sign);
}
