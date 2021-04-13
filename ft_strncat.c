/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigabrie <vigabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:26:05 by vigabrie          #+#    #+#             */
/*   Updated: 2021/04/13 19:23:48 by vigabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter2;
	unsigned int	counter3;

	counter2 = 0;
	counter3 = 0;
	while (dest[counter2])
	{
		counter2++;
	}
	while (counter3 < nb)
	{
		dest[counter2] = src[counter3];
		counter2++;
		counter3++;
	}
	dest[counter2] = '\0';
	return (dest);
}
