/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigabrie <vigabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 19:25:23 by vigabrie          #+#    #+#             */
/*   Updated: 2021/04/13 19:54:02 by vigabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (counter < n && src[counter])
	{
		dest[counter] = src[counter];
		counter++;
	}
	while(dest[counter])
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
