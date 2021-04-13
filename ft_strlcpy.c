/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigabrie <vigabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 13:15:39 by vigabrie          #+#    #+#             */
/*   Updated: 2021/04/12 16:18:38 by vigabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int counter;

	counter = 0;
	while (counter < size)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (src[counter])
	{
		counter++;
	}
	dest[counter] = '\0';
	return (counter);
}
