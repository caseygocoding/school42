/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wchan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 11:17:59 by wchan             #+#    #+#             */
/*   Updated: 2018/06/23 13:28:36 by wchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int resultat;

	if (power < 0)
		return (0);
	resultat = 1;
	while (power-- > 0)
	{
		resultat = resultat * nb;
	}
	return (resultat);
}
