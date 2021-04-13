/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vigabrie <vigabrie@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 13:57:51 by vigabrie          #+#    #+#             */
/*   Updated: 2021/04/13 16:35:57 by vigabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printer(int argc, char *argv[])
{
	int		counter;
	int		counteraux;

	counter = 1;
	counteraux = 0;
	while (counter < argc)
	{
		while (argv[counter][counteraux])
		{
			write(1, &argv[counter][counteraux], 1);
			counteraux++;
		}
		write(1, "\n", 1);
		counteraux = 0;
		counter++;
	}
}

char	**ft_ordination(int argc, char *argv[])
{
	int		counter;
	int		counteraux;
	int		counteraux2;
	char	*str;

	counter = 1;
	counteraux = 0;
	counteraux2 = 1;
	while (counteraux2 < argc - 1)
	{
		while (counter < argc - 1)
		{
			if (argv[counter][counteraux] > argv[counter + 1][counteraux])
			{
				str = argv[counter];
				argv[counter] = argv[counter + 1];
				argv[counter + 1] = str;
			}
			counter++;
		}
		counter = 0;
		counteraux2++;
	}
	return (argv);
}

int		main(int argc, char *argv[])
{
	argv = ft_ordination(argc, argv);
	ft_printer(argc, argv);
	return (0);
}
