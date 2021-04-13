/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigabrie <vigabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 18:12:14 by vigabrie          #+#    #+#             */
/*   Updated: 2021/04/13 19:28:41 by vigabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		counter;
	int		counteraux;
	int		counteraux2;

	counter = 0;
	counteraux = 0;
	counteraux2 = 0;
	while (str[counter])
	{
		while (str[counter + counteraux] == to_find[counteraux])
		{
			if (to_find[counteraux + 1] == '\0')
				return (&str[counter]);
			counteraux++;
		}
		counter++;
	}
	return (str);
}
