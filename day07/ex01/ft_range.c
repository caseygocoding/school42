/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 20:59:27 by wchan             #+#    #+#             */
/*   Updated: 2018/06/28 20:59:41 by wchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*ret;
	int count;
	int i;

	if (min >= max)
	{
		ret = 0;
		return (ret);
	}
	else
	{
		count = max - min;
		ret = (int*)malloc(sizeof(*ret) * count);
		i = 0;
		while (min < max)
		{
			ret[i] = min;
			min++;
			i++;
		}
	}
	return (ret);
}
