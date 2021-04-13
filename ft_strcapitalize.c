/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigabrie <vigabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 00:23:47 by vigabrie          #+#    #+#             */
/*   Updated: 2021/04/13 21:13:02 by vigabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int counter;

	counter = 0;
	if (str[counter] >= 'a' || str[counter] <= 'z')
		str[counter] -= 32;
	while (str[counter])
	{
		if (str[counter] == ' ')
		{
			if (str[counter + 1] >= 'a' && str[counter + 1] <= 'z')
				str[counter + 1] -= 32;
		}
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
