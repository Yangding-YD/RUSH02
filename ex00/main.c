/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jisoler- <jisoler-@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:37:27 by jisoler-          #+#    #+#             */
/*   Updated: 2025/08/30 17:31:40 by jisoler-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
		if (argc > 2)
		{
			write (2,  "Error: more than 2 arguments", 28);
			return (-1);
		}
		while (argv[1][i] != '\0' && i < 37)
		{
			if (argv[1][i] < '0' || argv [1][i] > '9')
			{
				write (2, "Error\n", 6);
			}
		i++;
		}
		if (i > 37)
		{
			write (2, "Error\n", 6);
		}
		return (0);
}
